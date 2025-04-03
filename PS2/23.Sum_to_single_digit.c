//Find the sum of digits of a number and print only if the sum is less than 10,else sum again example(932=9+3+2 = 14(greater than 10),so 1+4=5(lesser than 10),thus 5 will be the output.
#include<stdio.h>
int sum_digit(int);
int main()
{
    int num;
    scanf("%d",&num);
    while ( num/10 != 0)
        num=sum_digit(num);
    printf("%d",num);
}
int sum_digit(int num)
{
    if (num==0)
        return 0;
    else
        return (num%10 + sum_digit(num/10));
}