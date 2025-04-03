// #include<stdio.h>
// int main()
// { 
//     int n,m=0;
//     scanf("%d",&n);
//     int arr[n];
//     int arr2[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         int c=0;
//         for(int j=0;j<n;j++)
//         {
//             if(arr[i]>arr[j] && i!=j)
//             {
//                 c++;
//             }
//         }
//         arr2[m++]=c;
        
//     }

//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",arr2[i]);
//     }
// }
#include<stdio.h>
int main()
{
    int n,k=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int res[n];
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]>arr[j] && i!=j)
            {
                c++;
            }
        }
        res[k++]=c;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",res[i]);
    }
}