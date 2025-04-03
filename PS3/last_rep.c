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

    int re;
    for (int i=0;i<n;i++)
    {
        for(int j=n-1;j>0;j--)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                re=arr[i];
            }
        }
    }
    printf("%d",re);
}