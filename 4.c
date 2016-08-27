#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum,rem;
    sum=0;
    printf("Enter a number.\n");
    scanf("%d",&num);
    do
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }while(num!=0);
    printf("Sum of digits = %d",sum);
    getch();
    return 0;
}
