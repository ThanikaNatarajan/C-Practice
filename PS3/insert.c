#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int el,pos;
    printf("Element to be inserted\n");
    scanf("%d",&el);
    printf("Position at which to be inserted\n");
    scanf("%d",&pos);
    size++;
    for(int i=size-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=el;

    for(int i=0;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }
}