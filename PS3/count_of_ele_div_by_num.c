// // #include<stdio.h>
// // int main()
// // {
// //     //basic template for array
// //     int arr[100];
// //     int n,count=0;
// //     scanf("%d",&n);
// //     for(int i=0;i<n;i++)
// //         scanf("%d",&arr[i]);

// //     int num;
// //     scanf("%d",&num);
// //     for(int i=0;i<n;i++)
// //     {
// //         if(arr[i]%num==0)
// //         {
// //             count++;
// //         }
// //     } 
// //     printf("Num of elements divisible by %d is %d",num,count);
// // }

// #include<stdio.h>
// int main()
// {
//     int arr[100];
//     int size,i,num,count=0;
//     scanf("%d",&size); // get size of arr frm user
//     for (int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     scanf("%d",&num) ;//get number to divide 
//     for (int i=0;i<size;i++)
//     {
//     if((arr[i]%num)==0)
//     {
//         count++;
//     }
//     }
//     printf("%d",count);
// }

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
    int ele,count=0;
    scanf("%d",&ele);
    for(int i=0;i<n;i++)
    {
        if(arr[i]%ele==0)
        {
            count++;
        }
    }
    printf("%d",count);
}