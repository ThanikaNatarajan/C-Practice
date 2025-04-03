
/* 
Growth series
eg:
input : 
5 11
output :
11 22 44 88 176
*/
#include<stdio.h>
int main()
{
    int count , start ; 
    scanf("%d",&count);
    scanf("%d",&start);
    for(int i=0;i<count;i++)
    {
        printf("%d ",start);
        start*=2;
    }
    return 0;
}

