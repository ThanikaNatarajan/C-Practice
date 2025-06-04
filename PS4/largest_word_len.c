#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    int max=0 ; int count =0 ; int start = 0;

    scanf("%[^\n]s",&str);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            if(max<count)
            {
                max=count;
            }
            start=i+1;
            count=0;
        }
        else
        {
            count++;
        }
    }
    printf("The length of the longest string is %d",max);
    
}