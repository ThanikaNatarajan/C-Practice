/*
1
2 3
4 5 6
7 8 9 10
*/

#include<stdio.h>
int main()
{
    int n,count=1;
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=i ; j++)
        {
                printf("%d ",count++);
        }
        printf("\n");
    }
    return 0;
}