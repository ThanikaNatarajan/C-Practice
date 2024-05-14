// Count all digits
#include<stdio.h>
#include<math.h>
int len(int num)
{
    int len=(int)log10(num)+1;
    return len;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",len(num));
}
