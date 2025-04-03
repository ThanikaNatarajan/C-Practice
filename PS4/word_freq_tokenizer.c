#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX_LENGTH 100
#define MAX_WORDS 50

int main()
{
    char str[100];
    scanf("%[^\n]s",str);

    char words[MAX_WORDS][MAX_LENGTH];
    int freq[100];
    int word_count=0;

    char* token=strtok(str," ");

    while(token)
    {
        int index=-1;
        for(int i=0;i<word_count;i++)
        {
            if(strcmp(token,words[i])==0)
            {
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            strcpy(words[word_count],token);
            freq[word_count]=1;
            word_count++;

        }
        else
        {
            freq[index]++;
        }
        token=strtok(NULL," ");
    }

    for(int i=0;i<word_count;i++)
    {
        printf("%s : %d\n",words[i],freq[i]);
    }
    

}