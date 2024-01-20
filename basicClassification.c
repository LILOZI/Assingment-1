#include "NumClass.h" // This is for our own header file


// We wiil run eith a loop till the sqrt of the number and check if it dividing by it
// false = 0, true = 1
int isPrime(int x)
{
    if (x % 2 == 0)
    { // This is an even number so it's not prime
        return 0;
    }
    
    else
    {
        int y = x/2;
    
    for (int i = 3; i <= y; i++)
    {
        if (x % i == 0)
        {
            return 0; 
        }
    
    }
    return 1;
    }
}

int isStrong (int num)
{
int sum = 0; // keeping the sum of the digits
int temp = num;
while (temp > 0)
{
    int dig = temp % 10; // getting the last digit number
    sum += factorial(dig);
    temp /= 10; // Dividing it by 10 each iteration
}
return ((sum == num) ? 1:0);
}

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}