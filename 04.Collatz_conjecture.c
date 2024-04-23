/*
Collatz conjecture checks if any 2 repeating operations will transform a positive integer to 1 
Recieve an input and using bitwise XOR check if the number is even or odd
if even - divide by 2 
if odd - multiply by 3 and add 1 
keep repeating with the new number untill it becomes 1 
return the number of steps it takes to reduce the number to 1
*/

#include <stdio.h>
#include <stdbool.h>

bool isEven(int n)                  // function to check if number is even or odd
{

/*
n^1 - if n is odd , XOR n with 1 makes it even 
      if n is even , XOR n with 1 makes it odd
n+1 - if n is odd , n+1 makes it even 
      if n is even , n+1 makes it odd
n^1==n+1 means n is even 
*/

    if ((n ^ 1) == (n + 1))       
        return true;
    else
        return false;
}

int main()
{
    int num, count = 0;
    scanf("%d", &num);
    while (num != 1)
    {
        if (isEven(num)) {
            num = num / 2;
            count++;
        }
        else {
            num = (num * 3) + 1;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
