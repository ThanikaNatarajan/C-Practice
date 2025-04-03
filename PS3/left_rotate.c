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
    int r;
    scanf("%d",&r);
    for(int i=0;i<r;i++)
    {
        int first=arr[0];
        for(int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=first;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}