#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int coutStu(vector<int> arr, int pagesPerStu)
{
    int std = 1;
    long long pagesStu = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (pagesStu + arr[i] <= pagesPerStu)
        {
            pagesStu += arr[i];
        }
        else
        {
            std++;
            pagesStu = arr[i];
        }
    }
    return std;
}

int findPages(vector<int> arr, int k)
{
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        int noOfStu = coutStu(arr, mid);
        if (noOfStu > k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}

int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    cout << findPages(arr, k);

    return 0;
}