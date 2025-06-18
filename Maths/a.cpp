#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrime(int N)
{
    int count = 0;
    for (int i = 2; i <= N; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}

int countPrime2(int N)
{
    int count = 0;
    vector<bool> prime(N + 1, true);

    for (int i = 2; i <= N; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = i * 2; j <= N; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    return count;
}

int countDigits(int N)
{
    int count = 0;
    while (N > 0)
    {
        N = N / 10;
        count++;
    }
    return count;
}

bool isArmstrongNum(int N)
{
    int ans = 0, n = N;
    while (n > 0)
    {
        int ld = n % 10;
        ans += ld * ld * ld;
        n /= 10;
    }
    return ans == N;
}

int gcd(int n1, int n2)
{
    int min = n1 < n2 ? n1 : n2;
    for (int i = min; i > 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i;
        }
    }
    return 0;
}

int gcd2(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
    }
    return n1 == 0 ? n2 : n1;
}

int lcm(int n1, int n2)
{
    int g = gcd2(n1, n2);

    int ans = (n1 * n2) / g;
    return ans;
}

int reverseNum(int n)
{
    int ans = 0;
    while (n > 0)
    {
        int rem = n % 10;
        ans = (ans * 10) + rem;
        n /= 10;
    }
    return ans;
}

// 12 24,
int main()
{
    int n, m;
    cout << "Enter a number : ";
    cin >> n;
    // cout << "Enter a number : ";
    // cin >> m;
    cout << reverseNum(n);
    return 0;
}