/*
Print the sum of middle terms of a number , eg : 2570 , sum = 5+7 = 12
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n , sum=0 ;
    scanf("%d",&n);
    int len=(int)log10(n);
    n/=10;
    int newnum=n%(int)pow(10,len-1);
    
    while(newnum != 0)
    {
        int rem = newnum%10;
        sum += rem ; 
        newnum /= 10;
    }
    printf("%d",sum);
}
