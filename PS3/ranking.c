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
    for(int i=0;i<n;i++)
    {
        r=1;
        for(int j=i;j<n;j++)
        {
            if(arr[j]>arr[i])
            r++;
        }
        printf("%d ",r);
    }
}