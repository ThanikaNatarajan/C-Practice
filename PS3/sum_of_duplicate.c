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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=arr[j+1];
                i--;
                n--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    printf("%d ",sum);
}