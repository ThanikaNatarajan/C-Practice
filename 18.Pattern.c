/*

Recieve a number between 1 and 26 and print a right angle triangle of alphabets 
i/p-3
o/p : 

A
A B
A B C 

*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",%n);
    for(int i=0 , i<n ; i++)
    {
        for (int j=0 ; j<=i;j++)
        {
            printf("%c",65+j);
        }
        printf("\n");
    }
    return 0;
}