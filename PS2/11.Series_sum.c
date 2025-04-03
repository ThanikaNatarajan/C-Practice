
#include<stdio.h>
#include<math.h>

int main() {
    int num, terms, i;
    int sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    int term = 0;
    for (i = 1; i <= terms; i++) 
    {
        term = term * 10 + num;
        printf("%d ", term);
        sum += term;
    }
    
    printf("\nSum of the series: %d\n", sum);
    return 0;
}
