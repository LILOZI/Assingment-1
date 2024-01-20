#include "NumClass.h"

// We'll revers the number and check if it is eqaul to the origin number
// We'll vreate a new number that equals to the reversed one, and check if they both equals
int isPalindrome(int num)
{
    int revers = 0, dig = 0, temp = num;
    while (temp > 0)
    {
        dig = temp % 10;
        revers = revers * 10 + dig;
        temp /= 10;
    }
    return num == revers ? 1 : 0;
}

// To find if a givven number is an Armstrong number, we'll find the number of digits, the take if digit of the number and power it up,
// and check if the sum is equals to the original number
int isArmstrong(int num)
{   
    int temp = num;
    //amount of digits
    int digs = 0;
    do
    {
        temp = (int) temp/10;
        digs++;
    }
    while(temp/10 > 0);
    temp = num;
    double sum = 0;
    do
    {
        int lsd = temp%10;
        int miniSum = lsd;
        for(int i = 0; i < digs; i++)
        {
            miniSum *= lsd;
        }
        sum += miniSum;
        temp = (int) temp/10;
    } 
    while(temp > 0);
    return ((num == (int)sum) ? 1:0);
}
