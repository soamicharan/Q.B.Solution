#include<stdio.h>
#include<conio.h>
int main()
{
    float start,finish,step,a,b,c,d;
    printf("Enter Start,Finish and Steps respectively.\n");
    scanf("%f%f%f",&start,&finish,&step);
    printf("n^2\tn^3\t1/n\n");
    for(a=start;a<=finish;a=a+step)
    {
        printf("%.2f\t%.2f\t%.2f\n",a*a,a*a*a,1/a);
    }
    getch();
    return 0;
}
