#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("\nEnter the number of columns : ");
    scanf("%d",&c);
    int matrix[r][c];
    int count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int ele=r*c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(matrix[i][j]==0)
            {
                count++;
            }
        }
    }

    if(count>(ele/2))
        printf("\nThe matrix is sparse");
}