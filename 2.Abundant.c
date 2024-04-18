// 2. To check if a given number is abundant 

#include <stdio.h>
#include <math.h>

int main()
{
    int n , sum=0 ;     
    scanf("%d",&n);
    for ( int i = 1 ; i <= n/2 ; i++)  
    {
        if( n % i == 0) // to check factors of n
            sum+=i;     // adding factors to sum
    }
    if(sum>n)
        printf("It is an Abundant number");
    else
        printf("It is not an Abundant number");
}