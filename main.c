#include "NumClass.h"
int main()
{   
    int first = 0;
    int sec = 0;
    // printf("Enter the first number\n");
    scanf("%d",&first);
    // printf("Enter the second number\n");
    scanf("%d",&sec);
    
    printf("The Armstrong numbers are: ");
    for(int i = first;i<=sec;i++)
    {
        if(isArmstrong(i))
        {
            printf("%d ",i);
        }
    }
    printf("\nThe Palindromes are: ");
    for(int i = first;i<=sec;i++)
    {
        if(isPalindrome(i))
        {
            printf("%d ",i);
        }
    }
    printf("\nThe Prime numbers are: ");
    for(int i = first;i<=sec;i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
        }
    }
    printf("\nThe Strong numbers are: ");
    for(int i = first;i<=sec;i++)
    {
        if(isStrong(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}