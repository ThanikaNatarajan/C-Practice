//Integer to roman (only numbers under 40)
#include <stdio.h>
#include <string.h>

void printRoman(int number)
{
    int num[] = {1,4,5,9,10,40};
    char sym[][4] = {"I","IV","V","IX","X","XL"};
    int i=5;
    while(number>0)
    {
        int div = number/num[i];
        number = number%num[i];
        while(div--)
        {
            printf("%s", sym[i]);
        }
        i--;
    }
}


int main()
{
    int number ;

    scanf("%d",&number);
    printRoman(number);
    return 0;
}

