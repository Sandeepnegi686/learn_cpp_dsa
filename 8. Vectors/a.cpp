#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

// int main()
// {
//     vector<int> vec;
//     cout << vec[0];
//     return 0;
// }

// int main()
// {
//     vector<int> vec = {1, 2, 3};
//     cout << vec[0] << "\n";
//     cout << vec[1] << "\n";
//     cout << vec[2] << "\n";
//     vector<int> vec2(3, 2);
//     cout << vec2[0] << "\n";
//     cout << vec2[1] << "\n";
//     cout << vec2[2] << "\n";
//     return 0;
// }

// void printVector()

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4};
//     vector<int> vec2 = {'a', 'b', 'c', 'd'};

//     for (int num : vec)
//     {
//         cout << num << "\n";
//     }

//     for (char value : vec2)
//     {
//         cout << value << "\n";
//     }

//     return 0;
// }

// int main()
// {
// vector<int> vec = {1, 2, 3, 4};
// cout << "size " << vec.size();
// vector<int> vec(5, 11);
// vec.push_back(1);
// vec.push_back(2);
// vec.push_back(3);
// vec.pop_back();
// for (int num : vec)
// {
//     cout << num << "\n";
// }
// cout << vec.front() << "\n";
// cout << vec.back() << "\n";
//     cout << vec.at(2) << "\n";
//     cout << vec.capacity() << "\n";

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> array = {1, -2, 3, 4, -5, -6};
//     int maxSum = INT_MIN;
//     int size = array.size();

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i; j < size; j++)
//         {
//             int s_arr = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 s_arr += array[k];
//                 cout << array[k];
//             }
//             cout << " ";
//             if (maxSum < s_arr)
//             {
//                 maxSum = s_arr;
//             }
//         }
//         cout << "\n";
//     }
//     cout << "Max sub array sum is " << maxSum;
//     return 0;
// }

// int main()
// {
//     int max_Sum = INT_MIN;
//     vector<int> array = {1, -2, 3, 4, -5, -6};
//     int size = array.size();

//     for (int i = 0; i < size; i++)
//     {
//         int s_arr = 0;
//         for (int j = i; j < size; j++)
//         {
//             s_arr += array[j];
//             max_Sum = max(max_Sum, s_arr);
//         }
//     }

//     cout << "Max sub array sum is " << max_Sum;

//     return 0;
// }

// int main()
// {
//     int sum = 0;
//     int max_Sum = INT_MIN;
//     vector<int> nums = {4, 1, 2, 1, 2};

//     for (int num : nums)
//     {
//         sum = sum ^ num;
//     }
//     return sum;
// }

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int bestBuy = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit;

    return 0;
}