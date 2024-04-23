/*
Q. print prime number of stars upto the input 
input : 6
Output : 
**
***
*****
*/
#include<stdio.h>

int isPrime(int n)     //func to check if num is prime 
{
    if(n <= 1)
        return 0;      //if n is 1 or 0, it is not prime
    for(int i=2 ; i<=n/2 ; i++)
    {
        if(n%i==0)     //if n is divisible by i , it is not prime
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2 ; i<=n ; i++)
    {
        if(isPrime(i))
        {
            for(int j=0 ; j<i ; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}