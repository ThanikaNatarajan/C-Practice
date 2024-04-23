#include<stdio.h>
int main()
{
    int num , temp=0 , prod = 1;
    scanf("%d",&num);
    while(num>0)
    {
        temp=num%10;
        prod *= temp;
        num/=10;
    }
    printf("%d",prod);
}
