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
// void changeArr(int &num)
// {
//     num = 10;
// }

// int main()
// {
//     int a = 20;
//     cout << "a = " << a << endl;
//     changeArr(a);
//     cout << "a = " << a;

//     return 0;
// }

// int main()
// {
//     int numbers[] = {11, 22, 33, 44};
//     // cout << (&numbers + 1) << endl;
//     cout << *numbers++ << endl;
// }

// int main()
// {
//     int a = 10;
//     int *ptr = &a;
//     cout << ptr << endl;
//     ptr++;
//     cout << ptr << endl;
//     ptr--;
//     cout << ptr << endl;

//     return 0;
// }

// int main()
// {
//     int a = 10;
//     int b = 5;

//     int *ptrA = &a;
//     int *ptrB = &b;

//     ptrA++;

//     cout << ptrA << endl;
//     cout << ptrB << endl;
//     ptrB = ptrB + 2;
//     cout << ptrA - ptrB << endl;

//     return 0;
// }

// int main()
// {
//     int *ptr1;
//     int *ptr2;

//     cout << ptr1 << endl;
//     cout << ptr2 << endl;

//     cout << (ptr1 > ptr2) << endl;

//     return 0;
// }

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    cout << *(ptr + 1) << endl;
    cout << *(ptr + 3) << endl;

    ptr++;
    cout << *ptr << endl;

    return 0;
}