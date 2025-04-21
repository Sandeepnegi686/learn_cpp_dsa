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
    vector<int> ans = {};

    for (int i = 0; i < nums.size(); i++)
    {
        int product = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i == j)
            {
                continue;
            }
            product *= nums[j];
        }
        ans.push_back(product);
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    vector<int> ans = productExceptSelf(nums);

    printVector(ans);

    return 0;
}
