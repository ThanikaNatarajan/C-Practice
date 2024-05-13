#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int last=num%10;
    while(num>10)
    {
        num/=10;
    }
    int first=num;
    int sum=first+last;
    printf("%d",sum);
}
