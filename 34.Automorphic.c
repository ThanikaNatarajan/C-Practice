#include<stdio.h>
#include<stdbool.h>
bool am(int n)
{
    int sq=n*n;
    while(n>0)
    {
        return (n%10==sq%10);
        n/=10;
        sq/=10;
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    if (am(num))
    {
        printf("Automorphic");
    }
    else 
        printf("Not automorphic");
}
