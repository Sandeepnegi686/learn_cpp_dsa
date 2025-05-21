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

vector<int> bubbleSort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}

vector<int> selectionSort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int smallNumIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallNumIndex])
            {
                smallNumIndex = j;
            }
        }
        swap(arr[i], arr[smallNumIndex]);
    }
    return arr;
}

vector<int> insertionSort(vector<int> arr)
{
    int n = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        int prev = i;
        while (prev > 0 && arr[prev] < arr[prev - 1])
        {
            swap(arr[prev], arr[prev - 1]);
            prev--;
        }
    }
    return arr;
}

vector<int> zeroOneTwo(vector<int> arr)
{
    int low = 0, mid = 0;
    int high = arr.size() - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++, mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return arr;
}

vector<int> mergeTwoSortedArray(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> arr3(n1 + n2);
    int n3 = arr3.size();

    int left = 0, right = 0;
    for (int i = 0; i < n3; i++)
    {
        if (arr1[left] <= arr2[right])
        {
            arr3[i] = arr1[left];
            left++;
        }
        else
        {
            arr3[i] = arr2[right];
            right++;
        }
    }
    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr3[i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr2[i] = arr3[n1 + i];
    }
}

vector<int> merge(vector<int> &a1, int m, vector<int> &a2, int n)
{
    int index = m + n - 1;
    int i = m - 1;
    int j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (a1[i] >= a2[j])
        {
            a1[index--] = a1[i--];
        }
        else
        {
            a1[index--] = a2[j--];
        }
    }
    if (j >= 0)
    {
        a1[index--] = a2[j--];
    }
}

int main()
{
    // vector<int> nums = {1, 0, 2, 2, 1, 0, 2, 1, 0, 2, 1};
    // vector<int> ans = zeroOneTwo(nums);

    vector<int> arr1 = {0, 1, 3, 5, 0, 0, 0, 0, 0, 0};
    vector<int> arr2 = {0, 2, 4, 6, 8, 10};

    merge(arr1, 4, arr2, 6);

    printVector(arr1);
    // printVector(arr2);

    return 0;
}