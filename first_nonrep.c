#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    scanf("%[^\n]s",s);
    int count[20];
    int m=0;
    for(int i=0;i<strlen(s);i++)
    {
        int freq=0;
        for(int j=0;j<strlen(s);j++)
        {
            if(s[i]==s[j])
            {
                freq++;
            }
        }
        count[m++]=freq;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]==1)
        {
            printf("%c",s[i]);
            return 0;
        }

    }
    printf("No non rep char");

}