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
    for(int i=0;i<n;i++)
    {
        for(int j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                printf("%d ",arr[i]);
                break;
            }
        }
    }
}