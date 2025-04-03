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
    int ele,sum=0,prod=1,count=0;
    scanf("%d",&ele);
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        prod*=arr[i];
        if(arr[i]==ele)
            count++;
    }
    printf("Sum is %d , Product is %d , count of %d is %d",sum,prod,ele,count);

}