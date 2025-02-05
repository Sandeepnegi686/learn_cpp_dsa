#include <iostream>
using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }
// int main()
// {
//     int n = 5;

//     char ch = 'A';
//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = 1; j < i + 1; j++)
//         {
//             cout << ch << " ";
//         }
//         cout << "\n";
//         ch++;
//     }
//     return 0;
// }

// int main()
// {
//     int n = 4;
//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = 1; j < i + 1; j++)
//         {
//             cout << j << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// int main()
// {
//     int n = 4;
//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = i; j > 0; j--)
//         {
//             cout << j << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
// int main()
// {
//     int n = 4;
//     int num = 1;
//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = 1; j < i + 1; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }
// int main()
// {
//     int n = 4;
//     for (int i = 1; i < n + 1; i++)
//     {
//         char ch = 65 + i - 1;
//         for (int j = 1; j < i + 1; j++)
//         {
//             cout << ch << " ";
//             ch--;
//         }
//         cout << "\n";
//     }
//     return 0;
// }
// int main()
// {
//     int n = 4;
//     char ch = 'A';
//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = 1; j < i + 1; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// int main()
// {
//     int n = 5;
//     char ch = 'A';
//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = 1; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = n - i + 1; j > 0; j--)
//         {
//             cout << ch;
//         }
//         cout << "\n";
//         ch++;
//     }
//     return 0;
// }

int main()
{
    int n = 6;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < ((i - 1) * 2) - 1; j++)
        {
            cout << " ";
        }
        if (i != 1)
            cout << "*";
        cout << "\n";
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < 2 * (n - i - 2) + 1; j++)
        {
            cout << " ";
        }
        if (i != n - 1)
            cout << "*";

        cout << "\n";
    }

    return 0;
}