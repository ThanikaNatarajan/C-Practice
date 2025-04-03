#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the matrix : ");
    scanf("%d",&n);
    int m1[n][n];
    int m2[n][n];
    printf("\n Enter the elements of the first matrix : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\n Enter the elements of the second matrix : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    int prod[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            prod[i][j]=m1[i][j]*m2[i][j];
        }
    }

    printf("\n The product matrix is : \n");
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<n;j++)
        {
            printf("%d ",prod[i][j]);
        }
    }


}