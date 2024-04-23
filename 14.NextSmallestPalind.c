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
    int num;
    scanf("%d",&num);
    num=num+1;
    while(!isPalind(num))
        num+=1;
    printf("%d",num);
    return 0;
}