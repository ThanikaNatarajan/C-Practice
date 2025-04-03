#include<stdio.h>
float det( int arr[3][3])
{
    return 
    (arr[0][0]*(arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2])) - 
    (arr[0][1]*(arr[1][0]*arr[2][2]-arr[2][0]*arr[1][2])) + 
    (arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]));
}
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    float ans=det(arr);
    printf("%.2f",ans);
    return 0;
}

// 00 01 02
// 10 11 12 
// 20 21 22