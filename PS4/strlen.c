#include<stdio.h>
int main()
{
    char string[100];
    scanf("%[^\n]s",string);
    int count=0;
    for(int i=0;string[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of %s is %d",string,count);
    return 0;
}