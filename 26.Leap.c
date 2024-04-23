#include<stdio.h>
int Leap(int year)
{
    if(year%4==0)
    {
        if(year%100==0)
            return(year%400==0);
        else  
            return 1;
    }
    else
        return 0;
}

int main()
{
    int year;
    scanf("%d",&year);
    if(Leap(year))
        printf("%d is a Leap Year\n",year);
    else        
        printf("%d is not a Leap Year\n",year);
    
    int leap_year=0 , nonleap_year=0;
    for(int i=year+1;i<=year+10;i++)
    {
        if(Leap(i))
            leap_year++;
        else   
            nonleap_year++;
    }
    printf("Leap year : %d\n",leap_year);
    printf("Non Leap Year : %d\n",nonleap_year);
}