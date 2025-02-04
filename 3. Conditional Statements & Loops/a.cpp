#include <iostream>
using namespace std;

// int main(){
//     char ch;
//     cout << "Enter a char : ";
//     cin >> ch;

//     if(ch >= 65 && ch <=90 ){
//         cout << "Uppercase";
//     }else if(ch >= 97 && ch <= 122){
//         cout << "Lowercase";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Enter a number : ";
//     int n;
//     cin >> n;
//     bool isPrime = true;

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }

//     isPrime ? cout << "prime" : cout << "not prime";

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter n";
//     cin >> n;

//     int sum = 0;
//     for (int i = 1; i <= n; i = i + 2)
//     {
//         sum += i;
//     }

//     cout << sum;

//     return 0;
// }

int main()
{
    int n;
    cout << "enter n";
    cin >> n;

    bool numPrime = true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            numPrime = false;
            break;
        }
    }

    numPrime ? cout << "prime" : cout << "not prime";

    return 0;
}