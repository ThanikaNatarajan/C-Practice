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
    int ele;
    scanf("%d",&ele);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
            count++;
    }
    printf("%d",count);


}