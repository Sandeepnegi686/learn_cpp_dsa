#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> numbers)
{

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
}

void printMatrix(vector<vector<int>> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printNto1(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    printNto1(n - 1);
}

int sumNNumbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumNNumbers(n - 1);
}

void print1toN(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    print1toN(n - 1);
    cout << n << " ";
}

int getFibonacci(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;

    return getFibonacci(n - 1) + getFibonacci(n - 2);
}

bool checkSorted(vector<int> arr, int index = 0)
{
    if (index == arr.size() - 1)
    {
        return true;
    }
    if (arr[index] > arr[index + 1])
    {
        return false;
    }
    return checkSorted(arr, index + 1);
}

int binarySearchRecursion(vector<int> arr, int target, int st, int end)
{
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            st = mid + 1;
            return binarySearchRecursion(arr, target, mid + 1, end);
        }
        else
        {
            end = mid - 1;
            return binarySearchRecursion(arr, target, st, mid - 1);
        }
    }
    return -1;
}

int search(vector<int> arr, int target)
{
    return binarySearchRecursion(arr, target, 0, arr.size() - 1);
}

void getAllSubset(vector<int> arr, vector<int> &ans, int index, vector<vector<int>> &allSubsets)
{
    if (index == arr.size())
    {
        allSubsets.push_back(ans);
        return;
    }
    ans.push_back(arr[index]);
    getAllSubset(arr, ans, index + 1, allSubsets);

    ans.pop_back();
    getAllSubset(arr, ans, index + 1, allSubsets);
}

void getAllSubset2(vector<int> arr, vector<vector<int>> &outputArr, vector<int> &tempArr, int stIdx)
{
    outputArr.push_back(tempArr);
    for (int i = stIdx; i < arr.size(); i++)
    {
        tempArr.push_back(arr[i]);
        getAllSubset2(arr, outputArr, tempArr, stIdx + 1);
        tempArr.pop_back();
    }
}

void printAllSubsets(vector<vector<int>> subsets)
{
    for (int i = 0; i < subsets.size(); i++)
    {
        for (int j = 0; j < subsets[i].size(); j++)
        {
            cout << subsets[i][j] << " ";
        }
        cout << "\n";
    }
}

void getAllPermutations(vector<int> &arr, int index, vector<vector<int>> &allPerms)
{
    if (index == arr.size())
    {
        allPerms.push_back(arr);
        return;
    }
    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[i], arr[index]);
        getAllPermutations(arr, index + 1, allPerms);
        swap(arr[i], arr[index]);
    }
}

bool isSafe(vector<string> &board, int row, int col, int n)
{
    for (int r = 0; r < n; r++)
    {
        if (board[r][col] == 'Q')
        {
            return false;
        }
    }
    int r = row, c = col;
    while (r >= 0 && c >= 0)
    {
        if (board[r][c] == 'Q')
        {
            return false;
        }
        r--, c--;
    }
    r = row, c = col;
    while (r < n && c >= 0)
    {
        if (board[r][c] == 'Q')
        {
            return false;
        }
        r++, c--;
    }
    return true;
}

void nQueens(vector<string> &board, int n, int row, vector<vector<string>> &ans)
{
    if (row == n)
    {
        ans.push_back({board});
        return;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 'Q';
            nQueens(board, n, row + 1, ans);
            board[row][col] = '.';
        }
    }
}

int main()
{
    // int ans;
    // ans = getFibonacci(5);
    // bool ans;
    // vector<int> arr1 = {1, 2, 3, 5, 8, 21, 65, 69};
    // vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    // int st = 0, end = arr.size() - 1;
    // ans = checkSorted(arr);
    // cout << ans;
    // int num = search(arr2, 6);
    // cout << num;

    // vector<int> arr = {1, 2};
    // vector<int> arr2 = {'a', 'b'};
    // vector<vector<int>> ans;
    // vector<vector<int>> allSubsets;

    // getAllPermutations(arr, 0, ans);

    // printMatrix(ans);

    int n = 4;

    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    nQueens(board, n, 0, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            cout << ans[i][j];
        }
    }

    return 0;
}