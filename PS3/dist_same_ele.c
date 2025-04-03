#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ele;
    scanf("%d",&ele);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            for(int j=n-1;j>0;j++)
            {
                if(arr[i]==arr[j] && i!=j)
                {
                    printf("%d",abs(i-j)-1);
                    break;
                }
            }
            break;
        }
    }
}