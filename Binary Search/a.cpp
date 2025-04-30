#include <iostream>
#include <vector>

using namespace std;

int normalBinarySearch(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int binarySearchRecursive(vector<int> nums, int target, int start, int end)
{
    if (start > end)
        return -1;
    int mid = start + ((end - start) / 2);

    if (nums[mid] == target)
    {
        return mid;
    }
    else if (nums[mid] < target)
    {
        return binarySearchRecursive(nums, target, mid + 1, end);
    }
    else if (nums[mid] > target)
    {
        return binarySearchRecursive(nums, target, start, mid - 1);
    }
}

int rotatedSortedArray(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (nums[mid] == target)
            return mid;
        if (nums[start] <= nums[mid])
        {
            if (nums[start] <= target && target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (nums[mid] < target <= nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 5;
    // int start = 0, end = nums.size() - 1;

    cout << rotatedSortedArray(nums, target);

    return 0;
}