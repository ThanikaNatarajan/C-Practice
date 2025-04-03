//Print the next 5 smallest prime numbers after a given number

#include<stdio.h>
int isPrime(int n)     //func to check if num is prime 
{
    for(int i=2 ; i<=n/2 ; i++)
    {
        if(n%i==0)          //if n is divisible by i , it is not prime
            return 0;
    }
    return 1;                
}

int main()           // main func
{
    int num;
    scanf("%d",&num);
    int count=0;
    for( int i=num+1 ; count < 5 ; i++)  //initializing a for loop to print 5 prime numbers
    {
        if(isPrime(i))                   // checking if number is prime
        {
            printf("%d",i);               // printing the prime number
            count++;                       // incrementing count
        }
    }

}
