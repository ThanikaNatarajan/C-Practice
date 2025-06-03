#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    int n=strlen(str);
    int freq[26]={0};
    int max=0;
    char maxChar;

    for(int i=0;i<=n;i++)
    {
        if(isalpha(str[i]))
        {
            char lower = tolower(str[i]);
            freq[lower-'a']++;
            if(freq[lower-'a']>max)
            {
                max=freq[lower-'a'];
                maxChar=lower;
            }
        }   
    }
    
    printf("The character %c appears %d times ",maxChar,max);
    

}