#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    int freq[26]={0};


    scanf("%[^\n]s",&str);

    for(int i=0;i<strlen(str);i++)
    {
        if(isalpha(str[i]))
        {
            char lower=tolower(str[i]);
            freq[lower-'a']++;
        }
    }
    for(int i=0;i<strlen(str);i++)
    {
        if(isalpha(str[i]))
        {
            char lower = tolower(str[i]);
            if(freq[lower - 'a'] == 1)
            {
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }
    printf("No non-repeating character found\n");
    return 0;
}