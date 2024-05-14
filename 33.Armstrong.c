// Armstrong number
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isArm(int n)
{
    int num=n,len=(int)log10(n)+1,arm=0,digit;
    while(n>0)
    {
        digit=n%10;
        arm+=(int)pow(digit,len);
        n/=10;
    }
    return (arm==num);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    if (isArm(n))
        printf("Is Armstrong");
    else
        printf("Is not Armstrong");
}
