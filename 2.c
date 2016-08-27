#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rev_num,a;
    rev_num=0;
    printf("Enter a number.\n");
    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
        rev_num=rev_num*10;
        rev_num=rev_num+num%10;
        num=num/10;
    }
    printf("You entered number = %d\nReverse number = %d\n",a,rev_num);
    getch();
    return 0;
}
