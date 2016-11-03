#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rev_num,a;  //declaring integers
    rev_num=0;    //assigning rev_num to 0
    printf("Enter a number.\n");
    scanf("%d",&num);
    a=num;         //int a is set to scanned num
    while(num!=0)             //while loop executing till num will zero
    {
        rev_num=rev_num*10;          //rev_num has new value multipled by 10
        rev_num=rev_num+num%10;       // here rev_num is addition of previous rev_num value and remainder of num integer by 10
        num=num/10;             // here num value is divided by 10
    }
    if(a==rev_num)                // it checks that reversed number is equal to entered number thus it is palindrome number or not
    printf("Entered number %d is palindrome number.\n",rev_num);
    else
        printf("Entered number %d is not a palindrome number.\n",rev_num);
    getch();
    return 0;
}
