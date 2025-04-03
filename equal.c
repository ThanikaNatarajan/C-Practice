#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100];
    char s2[100];
    int flag=1;
    scanf("%[^\n]s",s1);
    getchar();
    scanf("%[^\n]s",s2);

    // for(int i=0;i<strlen(s1)&&i<strlen(s2);i++)
    // {
    //     int flag=0;
    //     while(s1[i]!='\0' && s2[i]!='\0')
    //     {
    //         if(s1[i]==s2[i])
    //         {
    //             flag=1;
    //         }
    //         else if(s1[i]=='\0' && s2[i]!='\0' || s1[i]!='\0' && s2[i]=='\0' || s1[i]!=s2[i])
    //         {
    //             flag=0;
    //         }    
    //     }
    // }

    if(strlen(s1)!=strlen(s2))
    {
        flag=0;
    }
    else
    {
        for(int i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
        {
            if(s1[i]!=s2[i])
            {
                flag=0;
                break;
            }
        }

    }
    if(flag==1)
    {
        printf("Same string");
    }
    else
    {
        printf("Not same");
    }
}