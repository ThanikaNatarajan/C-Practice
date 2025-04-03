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
    int c;
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==arr[j][i])
            {
                c=1;
            }
        }
    }
    if(c==0)
        printf("Not symmetric");
    else    
        printf("symmetic");
}