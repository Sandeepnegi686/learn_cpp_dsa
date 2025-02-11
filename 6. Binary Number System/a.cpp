#include <iostream>
using namespace std;

// int main()
// {
//     cout << "& " << (6 & 10) << "\n";
//     cout << "| " << (6 | 10) << "\n";
//     cout << "^ " << (6 ^ 10) << "\n";
//     cout << "<< " << (10 << 2) << "\n";
//     cout << ">> " << (10 >> 1) << "\n";

//     return 0;
// }

// int main()
// {
//     cout << sizeof(int) << "\n";
//     cout << sizeof(long int) << "\n";
//     cout << sizeof(long long int) << "\n";
//     cout << sizeof(short int) << "\n";
//     cout << sizeof(signed int) << "\n";

//     int x = -32767;
//     cout << x << "\n";
//     return 0;
// }

int main()
{
    int n;
    int remainder = 0;
    bool powerOf2 = false;

    cout << "enter n :";
    cin >> n;

    while (remainder = 0)
    {
        remainder = n % 2;
        n = n / 2;
    }
    return 0;
}