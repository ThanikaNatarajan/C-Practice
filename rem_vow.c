#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            continue;
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}