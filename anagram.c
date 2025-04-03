#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int anagram(char *s1 , char *s2)
{
    //array to count
    int c1[256] = {0}; //[0,0,0,0,0.....]
    int c2[256] = {0};

    int i=0;
    while (s1[i]) // while s1[i] isnt null character '\0'
    {
        c1[s1[i++]]++;  
    }
    i=0;
    while (s2[i])
    {
        c2[s2[i++]]++;
    }

    for(int i=0;i<256;i++)
    {
        if(c1[i]!=c2[i])
            return false;
    }
    return true;
}
int main()
{
    char s1[100];char s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    if(anagram(s1,s2))
        printf("Is Anagram");
    else
        printf("Not an Anagram");
}