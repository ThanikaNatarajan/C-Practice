#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    char s[100];
    scanf("%[^\n]s",s);
    int flag=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(isupper(s[i]))
        {
            printf("%c",s[i]);
            //exit(0);
            flag=1;
        }
    }
    if (flag==0)
    {
        printf("No caps");
    }
}