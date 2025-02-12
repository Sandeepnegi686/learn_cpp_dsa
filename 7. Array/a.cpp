#include <iostream>
using namespace std;

// int main()
// {
// int age[] = {19, 26, 27, 28, 52};
// float price[3] = {10.12,
//                   15.11};

// int marks[5] = {10};

// for (int i = 0; i < 5; i++)
// {
//     cout << age[i] << "\n";
// }
// for (int i = 0; i < 3; i++)
// {
//     cout << price[i] << "\n";
// }
// for (int i = 0; i < 5; i++)
// {
//     cout << marks[i] << "\n";
// }
//     cout << sizeof(marks) / sizeof(int);
//     return 0;
// }
// int main()
// {
//     int size = 5;
//     int marks[size];

//     for (int i = 0; i < size; i++)
//     {
//         cin >> marks[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << marks[i] << "\n";
//     }

//     return 0;
// }

// int main()
// {
//     int numbers[] = {20, 6, 65, 84, 58, 68, 74, 56, 98, 15};
//     int size = sizeof(numbers) / sizeof(int);

//     int smallest = numbers[0];
//     int largest = numbers[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (smallest > numbers[i])
//             smallest = numbers[i];
//         if (largest < numbers[i])
//             largest = numbers[i];
//     }
//     cout << smallest << "\n";
//     cout << largest << "\n";

//     return 0;
// }

// int linearSearch(int numbers[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (numbers[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// void reverseArray(int arr[], int size)
// {
//     int start = 0;
//     int end = size - 1;
//     int temp;
//     while (start < end)
//     {
//         // temp = arr[start];
//         // arr[start] = arr[end];
//         // arr[end] = temp;
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//     // for (int i = 0; i < size / 2; i++)
//     // {
//     //     temp = arr[i];
//     //     arr[i] = arr[size - i - 1];
//     //     arr[size - i - 1] = temp;
//     // }
// }

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }
}

// int main()
// {
//     int numbers[] = {
//         1,
//         2,
//         3,
//         4,
//         5,
//         6,
//         7,
//         8,
//         9};
//     int size = sizeof(numbers) / sizeof(int);

//     printArray(numbers, size);

//     return 0;
// }

int main()
{
    int num1[] = {1, 2, 3, 4, 5, 6};
    int num2[] = {4, 5, 6, 7, 8, 9, 6};

    int newArr[6] = {0};

    int size1 = 6;
    int size2 = 7;

    for (int i = 0, k = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (num1[i] == num2[j])
            {
                bool alreadyExist = false;
                for (int l = 0; l < sizeof(newArr) / 4; l++)
                {
                    if (num1[i] == newArr[l])
                    {
                        alreadyExist = true;
                        break;
                    }
                }
                if (!alreadyExist)
                {
                    newArr[k] = num1[i];
                    k++;
                }
            }
        }
    }

    printArray(newArr, 6);

    return 0;
}