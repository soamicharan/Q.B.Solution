#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum,rem;
    sum=0;                //we intializing sum with 0
    printf("Enter a number.\n");
    scanf("%d",&num);
    while(num!=0)       //initiating a while loop with condition num is not equal to zero
    {
        rem=num%10;        //we initializing rem integer in remainder of num by dividing with 10
        sum=sum+rem;             //we adding remainder with sum integer
        num=num/10;             //now num is divded by 10
    }
    printf("Sum of digits = %d",sum);
    getch();
    return 0;
}
