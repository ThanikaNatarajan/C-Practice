/* 
QUESTION : to find the factorial of the given number(only if it is odd else and factorial of odd numbers only)if negative number invalid if even number please enter a valid input

EXPLANATION : 
Recieve input , check and return the following
- Odd : calculate factorial of odd numbers while considering only odd factors , eg : 5! - 5*3*1 ( excluding 2 and 4 as they are even )
- Even : print enter a valid inp
- Negative : print Invalid
*/
#include<stdio.h>
#include<math.h>
int fact(int n)
{
    if (n==0 || n==1) 
        return 1;
    else
        return n * fact(n-2);  // calculating factorial with odd factors 
}
int main()
{
    int num;
    scanf("%d",&num);
    if (num<0)                       // checking if num is negative
    {
        printf("Invalid");
        return 0;
    }
    if (num%2==0)                   // checking if num is even
        printf("Enter a valid input");
    else                            
        printf("%d",fact(num));     // returning factorial 
}