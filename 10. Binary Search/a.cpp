#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// int coutStu(vector<int> arr, int pagesPerStu)
// {
//     int std = 1;
//     long long pagesStu = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (pagesStu + arr[i] <= pagesPerStu)
//         {
//             pagesStu += arr[i];
//         }
//         else
//         {
//             std++;
//             pagesStu = arr[i];
//         }
//     }
//     return std;
// }

// int findPages(vector<int> arr, int k)
// {
//     int low = *max_element(arr.begin(), arr.end());
//     int high = accumulate(arr.begin(), arr.end(), 0);
//     while (low <= high)
//     {
//         int mid = low + ((high - low) / 2);
//         int noOfStu = coutStu(arr, mid);
//         if (noOfStu > k)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return low;
// }

bool canWePlace(vector<int> arr, int distance, int cows)
{
    int countCows = 1;
    int lastCow = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - lastCow <= distance)
        {
            countCows++;
            lastCow = arr[i];
        }
    }
    if (countCows >= cows)
        return 1;
    else
        return 0;
}

int findCows(vector<int> arr, int cows)
{
    if (cows < 2)
        return -1;

    stable_sort(arr.begin(), arr.end());
    int max = arr[arr.size() - 1];
    int min = arr[0];
    for (int i = 0; i < max - min; i++)
    {
        if (canWePlace(arr, i, cows) == true)
        {
            continue;
        }
        else
        {
            return i - 1;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int c = 3;
    cout << findCows(arr, c);

    return 0;
}