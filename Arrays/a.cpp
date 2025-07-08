#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <set>

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
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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

vector<int> sum2(vector<int> arr, int target)
{
    int n = arr.size();
    unordered_map<int, int> map;
    vector<int> ans = {-1, -1};
    for (int i = 0; i < n; i++)
    {
        int second = target - arr[i];
        if (map.find(second) != map.end())
        {
            ans[0] = i;
            ans[1] = map[second];
            return ans;
        }
        map.insert({arr[i], i});
    }
    return ans;
}

vector<int> missingAndRepeating(vector<int> arr)
{
    int n = arr.size();
    unordered_set<int> set;
    int dp = 0;
    for (int i = 0; i < n; i++)
    {
        if (set.find(arr[i]) != set.end())
        {
            dp = arr[i];
            break;
        }
        set.insert(arr[i]);
    }
    int mainSum = n * (n + 1) / 2;
    int arrSum = 0;
    for (int num : arr)
    {
        arrSum += num;
    }
    int r = mainSum - arrSum + dp;
    vector<int> ans = {abs(r), dp};
    return ans;
}

int findDuplicate(vector<int> arr)
{
    int slow = arr[0], fast = arr[0];
    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

vector<vector<int>> threeSum(vector<int> nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        unordered_map<int, int> map;
        for (int j = i + 1; j < n; j++)
        {
            int third = -(nums[i] + nums[j]);
            if (map.find(third) != map.end())
            {
                vector<int> tempArr = {i, map[third], j};
                sort(tempArr.begin(), tempArr.end());
                ans.push_back(tempArr);
            }
            map.insert({nums[j]}, j);
        }
    }
    return ans;
}

vector<vector<int>> threeSum2(vector<int> arr)
{
    vector<vector<int>> ans = {};
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {i, j, k};
                ans.push_back(temp);
                j++, k--;
                while (j < k && arr[j] == arr[j - 1])
                    j++;
                while (j < k && arr[k] == arr[k + 1])
                    k--;
            }
        }
    }
    return ans;
}

// 10, 2, 3, 4, 5, 7, 8
// 3,5,7,8
vector<vector<int>> fourSum(vector<int> arr, int t)
{
    int n = arr.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<int> st;
            for (int k = j + 1; k < n; k++)
            {
                int fourth = t - (arr[i] + arr[j] + arr[k]);
                if (st.find(fourth) != st.end())
                {
                    vector<int> temp = {arr[i], arr[j], arr[k], fourth};
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                }
                st.insert(arr[k]);
            }
        }
    }
    return ans;
}

vector<vector<int>> fourSum2(vector<int> arr, int t)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && arr[j] == arr[j - 1])
                continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                int sum = arr[i] + arr[j] + arr[k] + arr[l];
                if (sum < t)
                    k++;
                else if (sum > t)
                    l--;
                else
                {
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                    ans.push_back(temp);
                    k++, l--;
                    while (k < l && arr[k] == arr[k - 1])
                        k++;
                    while (k < l && arr[l] == arr[l + 1])
                        l--;
                }
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {10, 2, 3, 4, 5, 7, 8};

    // int ans = nextPermutaion(nums);
    // cout << ans;
    int target = 23;
    vector<vector<int>> ans = fourSum(nums, target);
    printMatrix(ans);

    return 0;
}
