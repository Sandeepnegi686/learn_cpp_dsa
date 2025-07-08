
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cmath> // for abs

using namespace std;

void printArray(vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << ", ";
    }
}

pair<int, int> findCell(int arr[][3], int row, int col, int key)
{
    pair<int, int> p = {-1, -1};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                p = {i, j};
                return p;
            }
        }
    }
    return p;
}

int maxRowSum(int matrix[][3])
{
    int maxSum = 0;
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
        maxSum = sum > maxSum ? sum : maxSum;
    }
    return maxSum;
}

int maxColSum(int matrix[][3])
{
    int maxSum = 0;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += matrix[j][i];
        }
        maxSum = sum > maxSum ? sum : maxSum;
    }
    return maxSum;
}

int diagonalSum(int matrix[][3], int row)
{
    int sum = 0;
    if (row % 2 == 0)
    {
        for (int i = 0; i < row; i++)
        {
            sum += matrix[i][i];
            sum += matrix[i][row - 1 - i];
        }
    }
    else
    {
        for (int i = 0; i < row; i++)
        {
            sum += matrix[i][i];
            sum += matrix[i][row - 1 - i];
        }
        int centre = row / 2;
        sum = sum - matrix[centre][centre];
    }
    return sum;
}

bool searchInCol(vector<vector<int>> matrix, int target, int midRow, int col)
{
    int st = 0, end = col - 1;
    while (st <= end)
    {
        int midCol = st + (end - st) / 2;
        if (target == matrix[midRow][midCol])
        {
            return true;
        }
        else if (target < matrix[midRow][midCol])
        {
            end = midCol - 1;
        }
        else
        {
            st = midCol + 1;
        }
    }
    return false;
}

bool searchInMatrix(vector<vector<int>> matrix, int target)
{
    int row = matrix.size(), col = matrix[0].size();
    int st = 0, end = row - 1;
    while (st <= end)
    {
        int midRow = st + (end - st) / 2;
        if (matrix[midRow][0] <= target && target <= matrix[midRow][col - 1])
        {
            // target is in midRow;
            return searchInCol(matrix, target, midRow, col);
        }
        else if (target < matrix[midRow][0])
        {
            end = midRow - 1;
        }
        else
        {
            st = midRow + 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size(), col = matrix[0].size();
    for (int i = col - 1; i >= 0; i--)
    {
        if (matrix[0][i] <= target)
        {
            for (int j = 0; j < row; j++)
            {
                if (matrix[j][i] == target)
                {
                    return true;
                }
            }
            return false;
        }
    }
    return false;
}

vector<int> spiralMatrix(vector<vector<int>> matrix)
{
    int n = matrix.size() - 1, m = matrix[0].size() - 1;
    int top = 0, buttom = n;
    int left = 0, right = m;
    vector<int> ans = {};
    while (top <= buttom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= buttom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;
        if (top <= buttom)
        {

            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[buttom][i]);
            }
            buttom--;
        }
        if (left <= right)
        {

            for (int i = buttom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main()
{
    // int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int matrix2[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    // vector<vector<int>> matrix3 = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    // vector<vector<int>> matrix4 = {{1}};
    // vector<vector<int>> matrix5 = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    // vector<vector<int>> matrix6 = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}, {25, 26, 27, 28, 29, 30}, {31, 32, 33, 34, 35, 36}};

    // pair<int, int> p = {-1, -1};
    // cout << p.first << " " << p.second;

    // int sum = diagonalSum(matrix1, 3);
    // cout << sum;

    // cout << spiralMatrix(matrix6);
    // vector<int> vec = {5, 2, 11, 7, 15};
    // vector<int> vec1 = {4, 3, 6, 2, 1, 1};
    // vector<int> ans = sum2(vec, 9);
    // vector<int> ans = missingAndRepeating(vec1);

    // printArray(ans);

    vector<int> nums = {3, 1, 3, 4, 2};
    // cout << findDuplicate(nums);

    return 0;
}