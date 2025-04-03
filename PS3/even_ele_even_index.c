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
    for(int i=2;i<n;i+=2)
    {
        if(arr[i]%2==0)
        {
            for(int j=0;j<n;j++)
            {
                arr[j]=arr[j+1];
            }
            n--;
            i--;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}