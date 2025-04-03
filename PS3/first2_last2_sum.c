#include<stdio.h>
int main()
{
    int n , sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n<=3)
    {
        printf("%d",arr[0]+arr[n-1]);
    }
    if(n>3)
    {
        printf("%d",arr[0]+arr[1]+arr[n-1]+arr[n-2]);
    }
}