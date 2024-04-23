/* Find sum of odd digits and sum of even digits in a number 
eg: 2947
odd sum -> 9+7 = 16
even sum -> 2+4 = 6
*/
#include<stdio.h>
int main()
{
    int n ,digit, evensum=0 , oddsum=0;
    scanf("%d",&n);

    while(n>0)
    {
        digit=n%10;
        if(digit%2==0)
        {
            evensum+=digit;
        }
        else
        {
            oddsum+=digit;
        }
        n=n/10;
    }
    printf("%d\n%d",evensum,oddsum);
}