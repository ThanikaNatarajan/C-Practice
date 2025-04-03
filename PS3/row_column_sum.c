#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d",&r);
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int row_sum[c],column_sum[c];
    for(int i=0;i<r;i++) row_sum[i]=0;
    for(int j=0;j<c;j++) column_sum[j]=0;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            row_sum[i]+=arr[i][j];
            column_sum[j]+=arr[i][j];
        }
    }
    for(int i=0;i<r;i++) printf("%d ",row_sum[i]);
    for(int j=0;j<c;j++) printf("%d ",column_sum[j]);
}