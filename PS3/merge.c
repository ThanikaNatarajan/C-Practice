#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    int m;
    scanf("%d",&m);
    int arr2[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }

    int size=n+m;
    int arr3[size];
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        arr3[n+i]=arr2[i];
    }
    for(int i=0;i<size;i++)
        printf("%d ",arr3[i]);
}