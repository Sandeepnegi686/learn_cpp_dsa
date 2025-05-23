#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

long long noOfDigits(int N)
{
    if (N == 1)
        return 1;
    if (N == 2)
        return 1;

    long long last = 1;
    long long secondLast = 1;
    long long c;
    for (int i = 3; i <= N; i++)
    {
        c = last + secondLast;
        secondLast = last;
        last = c;
    }

    cout << "value of c : " << c << endl;

    int nOfDigit = 0;
    while (c > 0)
    {
        nOfDigit++;
        c = c / 10;
    }

    return nOfDigit;
}

void printAllDivisors(int N)
{
    for (int i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            cout << i << " ";
            if ((N % i) == 0 && (N / i) != i)
            {
                cout << N / i << " ";
            }
        }
    }
}

bool checkPrime(int N)
{
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        return true;
    return false;
}

bool checkArmstrongNumber(int N)
{
    // 371 =
    // 1634 = 1 + 216+27+64
    int sum = 0;
    int n = N;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit * lastDigit * lastDigit;
        n = n / 10;
    }
    if (sum == N)
        return true;
    return false;
}

// find Greatest common Divisible
int getGCD(int n1, int n2)
{
    // int ans = 1;
    // int minNum = min(n1, n2);
    // for (int i = 2; i <= minNum; i++)
    // {
    //     if (n1 % i == 0 && n2 % i == 0)
    //     {
    //         ans = i;
    //     }
    // }
    // return ans;

    int a = n1;
    int b = n2;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a > 0 ? a : b;
}

vector<int> sortArr(vector<int> nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    return nums;
}

int main()
{

    vector<int> arr = {1, 1, 0, 0, 2, 1};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    vector<int> a = sortArr(arr);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}