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
    int last=arr[n-1];
    printf("%d",last);
    for(int i=n-2;i>0;i--)
    {
        if(arr[i]>last)
        {
            printf(" %d",arr[i]);
            last=arr[i];
        }
    }
}