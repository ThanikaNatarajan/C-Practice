#include<stdio.h>
int main()
{
    int n=3,i,j;
    int matrix[n][n];
    int z=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
                z=1;
        }
    }
    int m=0;
    if(z==1)
    {
        for(int i=0;i<n;i++)
        {
            printf("\n");
            for(int j=0;j<n;j++)
            {
                if(j==m)
                {
                    printf("1 ");
                }
                else
                {
                    printf("0 ");
                }
            }
            m++;
        }
    }

    if(z==0)
    {
        for(i=0;i<n;i++)
        {
            printf("\n");
            for(j=0;j<n;j++)
            {
                printf("%d ",matrix[j][i]);
            }
        }
    }
}