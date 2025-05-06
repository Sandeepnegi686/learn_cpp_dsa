#include <iostream>
#include <vector>
#include <climits>

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

int peakIndexInMountainArray(vector<int> nums)
{
    if (nums.size() < 3)
        return -1;
    int start = 1;
    int end = nums.size() - 2;
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
            return mid;
        if (nums[mid - 1] < nums[mid])
        {
            start = mid + 1;
        }
        if (nums[mid] > nums[mid + 1])
        {
            end = mid - 1;
        }
    }
    return -1;
}

int singleNonDuplicate(vector<int> nums)
{
    if (nums.size() == 1)
        return nums[0];
    if (nums.size() == 2)
        return -1;
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid == 0 && nums[mid] != nums[mid + 1])
        {
            return nums[0];
        }
        else if (mid == (nums.size() - 1) && nums[mid] != nums[mid - 1])
        {
            return nums[nums.size() - 1];
        }

        if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        if (mid % 2 == 0)
        {
            if (nums[mid] == nums[mid - 1])
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
            if (nums[mid] == nums[mid - 1])
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

bool isValid(vector<int> books, int students, int maxAllowedPages)
{
    int student = 1, pages = 0;
    for (int i = 0; i < books.size(); i++)
    {
        if (student > students)
        {
            return false;
        }
        if (pages + books[i] <= maxAllowedPages)
        {
            pages += books[i];
        }
        else
        {
            student++;
            pages = books[i];
        }
    }
    if (student <= students)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int allocateBooks(vector<int> books, int k)
{
    if (books.size() < k)
        return -1;
    int start = 0, end = 0, ans = -1;
    for (int i = 0; i < books.size(); i++)
    {
        if (start < books[i])
            start = books[i];
        end += books[i];
    }

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (isValid(books, k, mid))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

bool canPaint(vector<int> woods, int p, int paintsPerWorker)
{
    int painter = 1;
    int paints = 0;
    for (int i = 0; i < woods.size(); i++)
    {
        if (p < painter)
            return false;
        if (paints + woods[i] <= paintsPerWorker)
        {
            paints += woods[i];
        }
        else
        {
            painter++;
            paints = woods[i];
        }
    }
    return painter > p ? false : true;
}

int minTime(vector<int> arr, int k)
{
    if (arr.size() < k)
        return -1;
    // code here
    int minTime = -1;
    int start = INT_MAX, end = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        start = start > arr[i] ? arr[i] : start;
        end += arr[i];
    }
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (canPaint(arr, k, mid))
        {
            end = mid - 1;
            minTime = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    // return minimum time
    return minTime;
}

int main()
{
    vector<int> nums = {40, 30, 10, 20};
    // int target = 5;
    // int start = 0, end = nums.size() - 1;

    cout << minTime(nums, 2);

    return 0;
}