//Program to print next 5 palindrome numbers 
#include<stdio.h>
int isPalind(int num)
{
    int n , rev=0 , k;
    n=num;
    while(num!=0)
    {
        k=num%10;
        rev=(rev*10)+k;
        num=num/10;
    }
    return (n==rev);
}

int main()
{
    int num,count=0;
    scanf("%d",&num);
    while(count<=5)
    {
    while(!isPalind(num))
        num+=1;
    printf("%d\n",num);
    num++;
    count++;
    
    }
    return 0;
}