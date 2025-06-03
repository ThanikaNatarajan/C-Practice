#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];

    scanf("%[^\n]s",&str);

    for(int i=0;i<strlen(str);i++)
    {
        if(isupper(str[i]))
        {
            printf("%c",str[i]);
            break;
        }

    }
}