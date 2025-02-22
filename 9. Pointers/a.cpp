#include <iostream>
#include <vector>

using namespace std;

// int main()
// {
//     int x = 1;
//     int *ptr = &x;
//     cout << &x << "\n";
//     cout << ptr << "\n";

//     int **pptr = &ptr;

//     cout << *(*pptr);

//     return 0;
// }

// int main()
// {
//     int *ptr = NULL;
//     cout << *ptr;
//     return 0;
// }

// pass by reference
//  void changeA(int *a)
//  {
//      *a = 30;
//  }

// int main()
// {
//     int a = 10;
//     cout << "a = " << a << endl;
//     changeA(&a);
//     cout << "a = " << a;

//     return 0;
// }

// by reference using alias
void changeArr(int &num)
{
    num = 10;
}

int main()
{
    int a = 20;
    cout << "a = " << a << endl;
    changeArr(a);
    cout << "a = " << a;

    return 0;
}