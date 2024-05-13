/* Recieve a number and check if its even or odd 
if its even print the square of even numbers upto the given number 
if its odd print the square of odd numbers upto the number
i/p: 5
o/p : 1 , 9 , 25

i/p: 4
o/p : 4,16
*/

#include<stdio.h>
#include<stdbool.h>


bool isEven(int num)
{
    if (num%2==0)
        return true;
    else
        return false;


}

int main()
{
    int n;
    scanf("%d",&n);
    if(isEven(n))
    {
        for (int i=0 ; i<=n ; i+=2)
        {
            printf("%d ",i*i);
        }
    }
    else
    {
        for(int i=1 ; i<=n ; i+=2)
        {
            printf("%d ",i*i);
        }
    }
}
