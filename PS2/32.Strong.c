// To check if a number is a strong number , eg - 145 is the sum of the factorial of its digits ( 1! + 4! + 5! )
#include<stdio.h>
int fact(int r)
{
    int mul=1;
    for(int i=1;i<=r;i++)
        mul=mul*i;
    return mul;
}

int main()
{
    int n,sum=0,r;
    scanf("%d",&n);
    int k=n;
    while(k!=0)
    {
        r=k%10;
        int f=fact(r);
        k=k/10;
        sum=sum+f;
    }

    if(sum==n)
        printf("It is a strong number");
    else    
        printf("It is not a strong number");
    return 0;
      
}
