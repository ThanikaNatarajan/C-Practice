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
        int isPrime=1;
        if (arr[i]<2)
            isPrime = 0;
        for(int j=2;j<arr[i]/2;j++)
        {
            if (arr[i]%j==0)
                isPrime=0; 
        }
        if (!isPrime)
            printf("%d ",arr[i]);
    }
    return 0;
}