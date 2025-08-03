#include <iostream>
#include <vector>
#include <set>
#include <limits.h>

using namespace std;

int maxSum(vector<int> &nums)
{
    int sum = 0;
    set<int> st;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            if (st.find(nums[i]) != st.end())
            {
                continue;
            }
            st.insert(nums[i]);
        }
    }

    for (auto itr : st)
    {
        sum += itr;
    }
    return sum;
}

int main()
{
    vector<int> nums = {1, 2, -1, -2, 1, 0, -1};
    int ans = maxSum(nums);

    cout << ans;
    return 0;
}