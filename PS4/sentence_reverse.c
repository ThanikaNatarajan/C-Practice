#include<stdio.h>
#include<string.h>

void reverse(char *str)
{
    int len=strlen(str);
    int start=0,end=0;

    for(int i=0;i<len;i++)
    {
        char temp=str[i];
        str[i]=str[len-1];
        str[len-1]=temp;
    }

}
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    if(str[strlen(str) - 1] == '\n')
    {
        str[strlen(str)]-1 == '\0';
    }

    reverse(str);

    printf("Reversed sentence is : ",str);
    return 0;
}