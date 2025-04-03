#include<stdio.h>
int main()
{
    int arr[]={0,1,0,2,0,3,0,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int temp1[size];
    int temp2[size];
    int count = 0;
    int index1=0;
    int index2=0;

    //counting 0's in original arr
    for(int i=0;i<size;i++)
    {
        if (arr[i]==0)
            count++;
    }

    //creating non 0 array
    for(int i=0;i<size;i++)
    {
        if (arr[i]!=0)
        {
            temp2[index1++]=arr[i];
        }
    }

    //1st half of non 0 ele
    int first_half=index1/2;
    for (int i=0;i<first_half;i++)
    {
        temp1[index2++]=temp2[i];
    }

    //0's in da middle
    for(int i=0;i<count;i++)
        temp1[index2++]=0;

    //remaining half of non 0 ele
    
    for(int i=first_half ; i<index1;i++)
    {
        temp1[index2++]=temp2[i];
    }

    //printing
    for(int i=0;i<size;i++)
    {
        printf("%d ",temp1[i]);
    }
}