#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int res=(n*(n-1))/2;
    printf("Number of handshakes are : %d",res);
}