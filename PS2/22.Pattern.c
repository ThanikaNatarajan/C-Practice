/*
1 
2 3 2 
4 5 6 5 4 
7 8 9 10 9 8 7 

*/
#include <stdio.h>

int main() {
    int r , num=1;
    int c,c1,c2;
    
    scanf("%d",&r);
    for(c=1 ; c<=r ; c++)
    {
        for(c1=1;c1<=c;c1++)
        {
            printf("%d ",num);
            num++;
        }
        for(c2=1;c2<=c-1;c2++)
        {
            printf("%d ",num-2);
            num--;
        }
        printf("\n");
        num=1+c*(c+1)/2;
    }
}