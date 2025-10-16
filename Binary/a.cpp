#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int number)
{
    int ans = 0;
    int multiply = 1;
    while (number > 0)
    {
        int reminder = number % 2;
        ans = ans + (reminder * multiply);
        multiply = multiply * 10;
        number = number / 2;
    }
    return ans;
}
int binaryToDecimal(int number)
{
    int ans = 0;
    int multiple = 1;
    while (number > 0)
    {
        int reminder = number % 2;
        ans = ans + (reminder * multiple);
        number /= 10;
        multiple *= 2;
    }
    return ans;
}

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         int q;
//         cin >> q;
//         int a = 0;
//         while (q--)
//         {
//             int d;
//             cin >> d;
//             a = a | (1 << d);
//         }
//         arr[i] = a;
//     }
//     int m = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             int b = (arr[i] & arr[j]);
//             int c = __builtin_popcount(b);
//             m = c > m ? c : m;
//         }
//     }
//     cout << m;

//     return 0;
// }

// Print All Subsets using Bit Masking
int main()
{
    vector<int> a = {2, 4, 8, 24};
    int n = a.size();
    vector<vector<int>> allSubsets;

    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> ar;
        for (int j = 0; j < n; j++)
        {
            if (((i >> j) & 1) != 0)
            {
                ar.push_back(a[j]);
            }
        }
        allSubsets.push_back(ar);
    }

    for (auto sub : allSubsets)
    {
        for (auto n : sub)
        {
            cout << n << ' ';
        }
        cout << '\n';
    }

    return 0;
}