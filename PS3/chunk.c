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
    int chunk;
    scanf("%d",&chunk);
    for(int i=0;i<n;i+=chunk)
    {
        printf("[");
        for(int j=i;j<i+chunk && j<n;j++)
        {
            printf("%d",arr[j]);
            if(j<i+chunk-1 && j<n-1)
            {
                printf(",");
            }
        }
        printf("]");
    }
}