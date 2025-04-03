//Swapping 1st and last digit of a number

int main()
{
    int num , first_dig , last_dig , power , len; 
    printf("Enter the num");
    scanf("%d",&num); // num=1234
    last_dig = num%10;  // last digit is acquired -last_dig=4
    num/=10 ; // last digit is removed num=123
    len = (int) log10(num); //len=2
    power=pow(10,len); // power= 10^2 = 100
    first_dig=num/power; //first_dig=123/100=1
    num%=power; // num=123%100=23
    num=(last_dig * power + num)* 10 + first_dig;
    printf("%d",num);

}