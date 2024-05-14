#include<stdio.h>
#include<stdbool.h>

bool isEven(int n)
{
    if(n%2==0)
        return true;
    else
        return false;
}

int main()
{
    int n , t1=0,t2=1,next=t1+t2;
    scanf("%d",&n);
    printf("%d ",0 );
    while(next<=n)
    {
        if(isEven(next))
            printf("%d ",next);
        t1=t2;
        t2=next;
        next=t1+t2;
    }
    
}
