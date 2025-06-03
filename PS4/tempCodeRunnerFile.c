//Replace specific char with another char and numbers with 'n' 
//a->b , t->g , number->n , eg : Education4all ->Educbgionnbll

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='a')
            str[i]='b';
        else if(str[i]=='t')
            str[i]='g';
        else if (isdigit(str[i]))
            str[i]='n';
        else
            continue;
    }
    printf("%s",str);
}