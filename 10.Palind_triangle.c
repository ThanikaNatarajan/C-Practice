/*
Right angle Palindrome triangle 
i/p - 3 
1
121
12321
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n ; i++)    // i iterates from 1 to n
    {
        for(int k=1 ; k<=i;k++) // k iterates to print from 1 to i
        {
            printf("%d",k);
        }
        for (int l=i-1 ; l>=1 ; l--)    // l  iterates to print from i to 1 
        {
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}

