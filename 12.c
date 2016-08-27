#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    for(d=2;d<=12;d++)
        printf("Table of %d\t",d);
    printf("\n");
    for(a=2;a<=20;a++)
    {
        for(b=2;b<=12;b++)
        {
            c=a*b;

            printf("%d X %d = %d\t",b,a,c);
        }
        printf("\n");
    }
}
