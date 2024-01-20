#include "NumClass.h"
int isPalindrome(int number)
{   
    return ((number == rvs(number)) ? 1:0);
}

int isArmstrong(int num)
{
    int power = getDigitNum(num);
    int res = sumOfDigit(num, power);
    return (num == res ? 1 : 0);
}

// Helpers function for them
// we'll check th3e palindrom in the same idea, by reversing the numbers

int log10(int num)
{
    return ((num < 10) ? 0: 1+log10(num/10));
}
int pow(int num,int deg)
{
    return (deg==1) ? num:num*pow(num,deg-1);
}
int rvs(int rev)
{
    if (rev < 10)
    {
        return rev;
    }
    int dig = log10(rev);

    return ((rev % 10) * pow(10, dig)) + rvs(rev / 10); // The recursion call
}

// Helpers functions for Armstrong number

int getDigitNum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + getDigitNum(n / 10);
}

// The power will get from the 'getDigitNum' function
int sumOfDigit(int number, int power)
{
    if (number == 0)
    {
        return 0; // This is like to initializ a variable of sum
    }
    return (pow(number % 10, power) + sumOfDigit(number / 10, power));
}