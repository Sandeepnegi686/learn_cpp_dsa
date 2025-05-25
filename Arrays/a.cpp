#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

void printVector(vector<int> numbers)
{

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
}

vector<int> productExceptSelf(vector<int> nums)
{
    vector<int> ans(nums.size(), 1);

    for (int i = 1; i < nums.size(); i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    int multiple = 1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        multiple *= nums[i + 1];
        ans[i] *= multiple;
    }

    return ans;
}

int maxArea(vector<int> nums)
{
    int max_area = INT_MIN;
    int l = 0;
    int r = nums.size() - 1;
    while (l < r)
    {
        int width = r - l;
        int height = min(nums[l], nums[r]);
        max_area = max(max_area, width * height);
        cout << "l  : " << l << " r : " << r << "\n";
        nums[l] < nums[r] ? l++ : r--;
    }

    return max_area;
}

int maxSubArray(vector<int> nums)
{
    int maxSum = INT_MIN;
    return maxSum;
}

double myPow(double x, int n)
{
    int binForm = n;
    if (binForm < 0)
    {
        binForm = -binForm;
        x = 1 / x;
    }
    double ans = 1;
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans = ans * x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int majorityElement(vector<int> nums)
{
    int count = 1, maxNum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (maxNum == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count > nums.size() / 2)
            return maxNum;
        if (count == 0)
        {
            maxNum = nums[i];
            count++;
        }
    }
    return maxNum;
}

int maxProfit(vector<int> nums)
{
    int mp = 0, sp = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (sp < nums[i])
        {
            mp = max(mp, nums[i] - sp);
        }
        if (sp > nums[i])
        {
            sp = nums[i];
        }
    }
    return mp;
}

void nextPermutaion(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return;

    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }
    for (int i = n - 1; i > index; i--)
    {
        if (arr[i] > arr[index])
        {
            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr.begin() + index + 1, arr.end());
}

int main()
{
    vector<int> nums = {1, 3, 5, 4, 2};

    // int ans = nextPermutaion(nums);

    nextPermutaion(nums);
    printVector(nums);
    // cout << ans;

    return 0;
}
