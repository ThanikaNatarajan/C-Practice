#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[100];
    scanf("%[^\n]s",s);
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            printf("Not a palindrome");
            return 0;
        }
    }
    printf("Is a palindrome");
    return 0;
}