// #include<stdio.h>
// int main()
// {
//     int n1,n2,c=0,temp,s1=0,s2=0,sum=0;

//     //array initialization
//     printf("Enter size of the first array");
//     scanf("%d",&n1);
//     int arr1[n1];
//     printf("Enter the elements of the first array");
//     for(int i=0;i<n1;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
    
//     printf("Enter the size of the second array");
//     scanf("%d",&n2);
//     int arr2[n2];
//     printf("Enter the elements of the second array");
//     for (int i=0;i<n2;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
    
//     //sorting the array
//     for(int i=0;i<n1;i++)
//     {
//         for(int j=i+1;j<n1;j++)
//         {
//             if (arr1[i]>arr1[j])
//             {
//                 temp=arr1[i];
//                 arr1[i]=arr1[j];
//                 arr1[j]=temp;
//             }

//         }
//     }

//     for(int i=0;i<n2;i++)
//     {
//         for(int j=i+1;j<n2;j++)
//         {
//             if(arr2[i]>arr2[j])
//             {
//                 temp=arr2[i];
//                 arr2[i]=arr2[j];
//                 arr2[j]=temp;
//             }
//         }
//     }

//     //Sum of arrays
//     for(int i=0;i<n1;i++)
//     {
//         s1+=arr1[i];
//     }
//     for(int i=0;i<n2;i++)
//     {
//         s2+=arr2[i];
//     }
//     printf("Sum of first array is %d , Sum of second array is %d\n",s1,s2);

//     // returning count
//     if (s1<s2)
//     {
//         sum=0;
//         for(int i=0;i<n2;i++)
//         {
//             sum+=arr2[i]; 
//             if(sum<s1)
//                 c++;
//             else
//                 break;
//         }
//     }
//     printf("The count is %d",c);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int n1,s1=0;
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
        s1+=arr1[i];
    }

    int n2,s2=0;
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
        s2+=arr2[i];
    }
    int temp;
    for(int i=0;i<n2;i++)
    {
        for(int j=i+1;j<n2;j++)
        {
            if(arr2[i]>arr2[j])
            {
                temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;

            }
        }
    }
    int c=0;
    if(s1<s2)
    {
        int sum=0;
        for(int i=0;i<n2;i++)
        {
            sum+=arr2[i];
            if(sum<s1)
            {
                c++;
            }
            else
            {
                break;
            }

        }

    }
    
    printf("%d",c); 


}