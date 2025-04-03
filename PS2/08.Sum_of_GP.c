// find sum of geometric series(1+½+¼+⅛+....+1/n) eg : I/p:12 o/p:2.00
#include <stdio.h>

int main() 
{
    int n ;
    double sum=0;
    scanf("%d",&n);
    for ( int i = 2 ; i<=n ; i+=2)
    {
        sum+=(1.0/i);
    }
    printf("%.0f",1+sum);
}
