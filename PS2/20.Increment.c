// Incrementing each digit of a number by 1 , i/p : 183 , o/p : 294

#include<stdio.h>
int main()
{
    int n,digit,new_n,power=1;
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        digit++;
        new_n+=(digit%10)*power;
        power*=10;
        n/=10;
    }
    printf("%d",new_n);
}