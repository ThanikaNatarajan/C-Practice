#include<stdio.h>
int main()
{
    int r;
    int c;
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
    
    for(int j=0;j<c;j++)
    {
        printf("\n");
        for(int i=0;i<r;i++)
        {
            printf("%d ",arr[i][j]);
        }
    }

}