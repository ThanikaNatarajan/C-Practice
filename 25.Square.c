/*
Sum the square value of the natural number from 1 to N.
Sample input:
5
sum = 1*1 + 2*2 + 3*3 + 4*4 + 5*5
Sample output:
55
*/
#include<stdio.h>
int main()
{
    int n , sum=0;
    scanf("%d",&n);
    for (int i=0 ; i<=n ; i++)
    {
        sum+=i*i;
    }
    printf("%d",sum);
}
