// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n][n];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int m=n;
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=arr[i][n-i-1];
//     }
//     printf("%d",sum);
// }
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0,m=n;
    for(int i=0;i<n;i++)
    {
        m--;
        for(int j=0;j<n;j++)
        {
            if(j==m)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum);
}