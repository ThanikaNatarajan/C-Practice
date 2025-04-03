#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];int visited[n];
   for(int i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
      visited[i]=0;
   }
   for(int i=0;i<n;i++)
   {
      if(visited[i]==0)
      {
         visited[i]=1;
         int count=1;
         for(int j=0;j<n;j++)
         {
            if(arr[i]==arr[j] && i!=j)
            {
               visited[j]=1;
               count++;
            }
         }
         printf("%d,%d\n",arr[i],count);
      }   
   }
}