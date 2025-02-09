#include <iostream>
using namespace std;

// int sumDigit(int num)
// {

//     if (num < 10)
//         return num;
//     int sum = 0;
//     int remainder = 0;
//     while (num > 9)
//     {
//         remainder = num % 10;
//         sum += remainder;
//         num = num / 10;
//     }
//     sum += num;
//     return sum;
// }

// int factorial(int num)
// {
//     if (num < 2)
//     {
//         return num;
//     }
//     int factorial = 1;
//     for (int i = 2; i < num + 1; i++)
//     {
//         factorial *= i;
//     }
//     return factorial;
// }

// int getBinomialCoefficient(int n, int r)
// {
//     int gbc = 0;
//     gbc = factorial(n) / (factorial(r) * factorial(n - r));
//     return gbc;
// }

// bool checkPrime(int num)
// {
//     if (num < 2)
//         return true;
//     bool numIsPrime = true;
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             numIsPrime = false;
//             break;
//         }
//     }
//     return numIsPrime;
// }

// void printPrimeNumbers(int num)
// {
//     int current = 2;
//     while (current <= num)
//     {
//         bool isPrime = true;
//         for (int i = 2; i < current; i++)
//         {
//             if (current % i == 0)
//             {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime)
//             cout << current << " ";
//         current++;
//     }
// }

// int findFibonacci(int num)
// {

//     if (num == 1)
//         return 0;
//     if (num == 2)
//         return 1;

//     int secondLastTerm = 0;
//     int lastTerm = 1;

//     int currentTerm = 0;
//     int cursor = 3;
//     while (cursor <= num)
//     {
//         currentTerm = lastTerm + secondLastTerm;
//         secondLastTerm = lastTerm;
//         lastTerm = currentTerm;
//         cursor++;
//     }
//     return currentTerm;
// }

// int decimalToBinary(int decimalNum)
// {
//     int ans = 0;
//     int remainder, pow = 1;
//     while (decimalNum > 0)
//     {
//         remainder = decimalNum % 2;
//         decimalNum = decimalNum / 2;
//         ans = ans + (remainder * pow);
//         pow *= 10;
//     }
//     return ans;
// }

int biToDec(int number)
{
    int ans = 0;
    int pow = 1;
    while (number > 0)
    {
        int remainder = number % 10;
        if (remainder == 1)
        {
            ans = ans + pow;
        }
        pow = pow * 2;
        number = number / 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    // cout << "enter r : ";
    // cin >> r;
    // cout << factorial(5) << "\n";
    // cout << getBinomialCoefficient(6, 3);
    // printPrimeNumbers(n);
    // cout << findFibonacci(n);
    cout << biToDec(n);
    return 0;
}
