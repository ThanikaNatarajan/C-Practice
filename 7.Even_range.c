#include<stdio.h>

int main() 
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a % 2 == 0 && b % 2 == 0) {
        a += 2;  // Add 2 to 'a'to print the next even num
        printf("Result: %d\n", a); 
    } else {
        printf("Both the numbers are not even\n"); 

    return 0; 
}
