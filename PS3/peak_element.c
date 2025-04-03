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
    if (arr[0]>arr[1])
        printf("%d ",arr[0]);
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
            printf("%d ",arr[i]);
    }
    if (arr[n-1]>arr[n-2])
        printf("%d ",arr[n-1]);
}