#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1])
        sum+=arr[0];
    if(arr[n-1]>arr[n-2])
        sum+=arr[n-1];
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
            sum+=arr[i];
    }
    printf("%d",sum);
}