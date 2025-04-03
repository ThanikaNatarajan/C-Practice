/* 
5
5 10
5 10 15
*/
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int multi=5;
    for (int i=1;i<=num;i++)
    {
        for (int j=1 ; j<=i ; j++)
        {
            printf("%d ",j*multi);
        }
        printf("\n");
    }
} 