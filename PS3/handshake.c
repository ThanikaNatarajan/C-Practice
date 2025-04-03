#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            c++;
        }
    }
    printf("%d",c);
}