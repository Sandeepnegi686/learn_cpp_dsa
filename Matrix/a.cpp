
#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

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

int main()
{
    int row = 4;
    int matrix[row][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    // pair<int, int> p = {-1, -1};
    // cout << p.first << " " << p.second;

    int sum = maxColSum(matrix);
    cout << sum;

    return 0;
}