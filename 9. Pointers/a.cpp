#include <iostream>
#include <vector>
#include <limits.h>

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

// int main()
// {
//     int arr[] = {10, 20, 30, 40};
//     int *ptr = arr;

//     cout << *(ptr + 1) << endl;
//     cout << *(ptr + 3) << endl;

//     ptr++;
//     cout << *ptr << endl;

//     return 0;
// }

// int main()
// {
//     vector<int> numbers = {-1, 0, 3, 4, 5, 9, 12};
//     int target = 3;
//     int n = numbers.size();

//     int st = 0;
//     int end = n - 1;
//     int mid = -1;

//     while (st <= end)
//     {
//         mid = (st + end) / 2;
//         if (numbers[mid] < target)
//         {
//             st = mid + 1;
//         }
//         else if (numbers[mid] > target)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             cout << mid;
//             return mid;
//         }
//     }
//     cout << mid;

//     return 0;
// }

// int binarySearch(vector<int> array, int target)
// {
//     int n = array.size();
//     int st = 0;
//     int end = n - 1;

//     while (st <= end)
//     {
//         int mid = st + ((end - st) / 2);
//         if (array[mid] < target)
//         {
//             st = mid + 1;
//         }
//         else if (array[mid] > target)
//         {
//             end = mid - 1;
//         }
//         else if (array[mid] == target)
//         {
//             return mid;
//         }
//     }
//     return -1;
// }

// int binarySearch(vector<int> array, int target, int start, int end)
// {
//     if (start <= end)
//     {

//         int mid = start + ((end - start) / 2);
//         if (array[mid] < target)
//         {
//             return binarySearch(array, target, mid + 1, end); // 2 3
//         }
//         else if (array[mid] > target)
//         {
//             return binarySearch(array, target, start, mid - 1); // 1
//         }
//         else if (array[mid] == target)
//         {
//             return mid;
//         }
//     }
//     else
//     {
//         return -1;
//     }
// }
// int binarySearch(vector<int> array, int target)
// {
//     //{-1, 0, 3, 4, 5, 9, 12}
//     int t = 3;
//     int st = 0;
//     int end = array.size() - 1;
//     while (st <= end)
//     {
//         int mid = st + ((end - st) / 2);

//         if (array[mid] < target)
//         {
//             st = mid + 1;
//         }
//         else if (array[mid] > target)
//         {
//             end = mid - 1;
//         }
//         else if (array[mid] == target)
//         {
//             return mid;
//         }
//     }
//     return -1;
// }
//[4,5,6,7,0,1,2]
// int rotatedSortedArray(vector<int> array, int target)
// {
//     int st = 0;
//     int end = array.size() - 1;

//     while (st <= end)
//     {
//         int mid = st + ((end - st) / 2);
//         if (array[mid] == target)
//             return mid;

//         if (array[st] <= array[mid])
//         { // left sorted
//             if (array[st] <= target && target <= array[mid])
//             {
//                 end = mid - 1;
//             }
//             else
//             {
//                 st = mid + 1;
//             }
//         }
//         else
//         { // right sorted
//             if (array[mid] <= target && target <= array[end])
//             {
//                 st = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }
//     }

//     return -1;
// }

// int peakIndexInMountainArray(vector<int> arr)
// {
//     int st = 1;
//     int end = arr.size() - 2;
//     while (st < end)
//     {
//         int mid = st + ((end - st) / 2);
//         if (arr[mid - 1]<arr[mid]> arr[mid + 1])
//         {
//             return mid;
//         }
//         if (arr[mid - 1] < arr[mid])
//         {
//             st = mid + 1;
//         }
//         else if (arr[mid] > arr[mid + 1])
//         {
//             end = mid - 1;
//         }
//     }
// }

// int singleNonDuplicate(vector<int> nums)
// {
//     int st = 0;
//     int end = nums.size() - 1;
//     while (st <= end)
//     {
//         int mid = st + ((end - st) / 2);
//         if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
//             return nums[mid];
//         if (nums[mid] == nums[mid - 1])
//         {
//             st = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

// int singleNonDuplicate(vector<int> arr)
// {
//     int st = 0;
//     int end = arr.size() - 1;

//     while (st <= end)
//     {
//         int mid = st + ((end - st) / 2);
//         if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
//             return arr[mid];
//         if (mid % 2 == 0)
//         {
//             if (arr[mid - 1] == arr[mid])
//             {
//                 end = mid - 1;
//             }
//             else
//             {
//                 st = mid + 1;
//             }
//         }
//         else
//         {
//             if (arr[mid - 1] == arr[mid])
//             {
//                 st = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }
//     }
//     return -1;
// }

// [12, 34, 67, 90], k = 2

// int maxInArray(vector<int> arr)
// {
//     int maxNum = INT_MIN;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         maxNum = max(maxNum, arr[i]);
//     }
//     return maxNum;
// }
// int sumOfArray(vector<int> arr)
// {
//     int sum = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }
// int stdCount(vector<int> arr, int pagePerStu)
// {
//     int stu = 1, pageStudent = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (pageStudent + arr[i] <= pagePerStu)
//         {
//             pageStudent += arr[i];
//         }
//         else
//         {
//             stu++;
//             pageStudent = arr[i];
//         }
//     }
//     return stu;
// }

// int findPages(vector<int> arr, int k)
// {
//     int student = 4;
//     int low = maxInArray(arr);
//     int high = sumOfArray(arr);
//     cout << low << "\n";
//     cout << high << "\n";
//     cout << "\n";
//     for (int i = low; i <= high; i++)
//     {
//         int countNoOfStu = stdCount(arr, i);
//         if (countNoOfStu == student)
//         {
//             return i;
//         }
//     }
// }

// int main()
// {
// vector<int> numbers = {10, 20, 30};
// int target = 9;
// int n = numbers.size() - 1;
//     cout << findPages(numbers, 2);

//     return 0;
// }