#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%[^\n]s",s);
    int count=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' '||s[i]=='\t'||s[i]=='\n')  //need to figure out a way to not count extra spaces 
        {
            count++;
        }
    }
    printf("%d",count);
}