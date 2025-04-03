#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    if(n<=3)
        sum=arr[0]+arr[n-1];
    if(n>=4)
        sum=arr[0]+arr[1]+arr[n-1]+arr[n-2];
    printf("%d",sum);

}