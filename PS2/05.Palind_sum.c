/*
Print the sum of all palindrome numbers from 1 to n .
*/
#include<stdio.h>

int isPalind(int num)
{
    int rev=0 , org = num ;
    while (num>0)
    {
        int digit = num%10;    // takes last digit of num
        rev=rev*10+digit;      // adding last digit to reversed digit
        num/=10;              // removing last digit of num
    }
    return org==rev;            // checking if reversed num is same as original num
}

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for (int i =1;i<=n;i++)         // iterating from 1 to n 
    {
        if (isPalind(i))
        {
            sum += i;               // if is palindrome , adding it to sum
        }
    }
    printf("%d",sum);
    return 0;

}
