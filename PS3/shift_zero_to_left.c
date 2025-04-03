#include<stdio.h>
int main()
{
    int arr[]={0,1,2,3,4};              //initialize
    int size=sizeof(arr)/sizeof(arr[0]);//find count
    int tmp[size];                      // create temp array
    int count=0;
    
    //count 0's
    for(int i=0;i<size;i++)         
    {
        if(arr[i]==0)
        {   
            count++;
        }
    }

    //place 0's at starting of temporary loop
    for(int i=0;i<count;i++)
        tmp[i]=0;

    //Placing non 0 elements after the 0's
    int index=count;            // if no of 0's is 4 , it must start at 5th index 
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
            tmp[index++]=arr[i];
        }
    }
    
    //print
    for(int i = 0; i < size; i++)
    {
        printf("%d ", tmp[i]);
    }

}