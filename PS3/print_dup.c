#include<stdio.h>
int main()
{
    int arr[]={1,2,5,2,8,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d",arr[i]);
            }
        }
    }
}