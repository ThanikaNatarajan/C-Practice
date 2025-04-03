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
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    float median;
    if(n%2!=0)
    {
        median=arr[n/2];
    }
    if(n%2==0)
    {
        median=((arr[n/2]+arr[n/2 - 1])/2.0);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("Median is %.1f",median);
}