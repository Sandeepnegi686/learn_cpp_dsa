#include <iostream>
#include <vector>
#include <limits.h>

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

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int ans = myPow(2.0, 6);

    // printVector(ans);
    cout << ans;

    return 0;
}
