// C program to check if a number is divisible by the sum of its digits 
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int rem=0,sum=0,n;
    n=num;
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    if(n%sum==0)
        printf("Harshad number");
    else    
        printf("Not a Harshad number");
    return 0;
}