// Count Smaller Elements on Right Side Given an array of integers, for
// each element, count the number of elements on its right side that are
// smaller than it

#include<stdio.h>
int main()
{
    int n,c=0,m=0;
    scanf("%d",&n);
    int arr[n] , carr[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                c++;
        }
        carr[m++]=c;
    }

    for(int i=0;i<n;i++)
        printf("%d ",carr[i]);

}