#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

int decimalToBinary(int number)
{
    int ans = 0;
    int multiply = 1;
    while (number > 0)
    {
        int reminder = number % 2;
        ans = ans + (reminder * multiply);
        multiply = multiply * 10;
        number = number / 2;
    }
    return ans;
}
int binaryToDecimal(int number)
{
    int ans = 0;
    int multiple = 1;
    while (number > 0)
    {
        int reminder = number % 2;
        ans = ans + (reminder * multiple);
        number /= 10;
        multiple *= 2;
    }
    return ans;
}

int main()
{

    cout << sizeof(short int);

    return 0;
}