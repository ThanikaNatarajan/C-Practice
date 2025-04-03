
// // #include<stdio.h>

// // int main()
// // {
// //     int arr[100];
// //     int i , n , max , min ,temp; 
// //     scanf("%d",&n);//no of ele in arr 
// //     for(i=0;i<n;i++)
// //     {
// //         scanf("%d",&arr[i]);
// //     }
// //     for(i=0;i<n-1;i++)
// //     {
// //         for(int j=0;j<n-i-1;j++)
// //         {
// //             if (arr[j]<arr[j+1])
// //             {
// //                 temp = arr[j];
// //                 arr[j]=arr[j+1];
// //                 arr[j+1]=temp;
// //             }
// //         }
// //     }
// //     printf("%d\n%d",arr[0],arr[n-1]);
// // }


// #include<stdio.h>
// int main()
// {
//     int n,min,max;
//     scanf("%d",&n);
//     int arr[n];

//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//         if(i==0)
//         {
//             min=arr[0];
//             max=arr[0];
//         }
//         if(arr[i]<min)
//             min=arr[i];
//         if(arr[i]>max)
//             max=arr[i];
//     }

//     // min=arr[0];
//     // max=arr[0];
//     // for(int i=0;i<n;i++)
//     // {
//     //     if(arr[i]<min)
//     //         min=arr[i];
//     //     if(arr[i]>max)
//     //         max=arr[i];
//     // }

//     printf("%d    %d",min,max);

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
    int max=arr[0],min=arr[0];
    for(int i=0;i<n+1;i++)
    {
        for(int j=i+1;j<n+1;j++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
    }
    printf("max is %d min is %d",max,min);
}