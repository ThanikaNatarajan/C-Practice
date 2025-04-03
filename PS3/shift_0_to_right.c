#include<stdio.h>
int main()
{
    int arr[]={0,1,0,2,0,3,0,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int tmp[size];
    int count=0;

    //count 0's
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        count++;
    }

    //place non 0 elements in starting
    int index=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
            tmp[index++]=arr[i];
        }
    }

    //place 0's after the non zeros
    for(int i=size-count ; i<size;i++)
    {
        tmp[i]=0;
    }

    //print da array hehe
    for(int i = 0; i < size; i++)
    {
        printf("%d ", tmp[i]);
    }
}