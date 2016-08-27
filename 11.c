#include<stdio.h>
#include<conio.h>
int main()
{
    int num,count,a,b;
    printf("Prime number from 1 to 200 - \n2\n");
    for(a=3;a<=200;a++)
    {
        for(b=2;b<=a-1;b++)
        {
            if(a%b==0)
                {count=1;break;}
            else
                count=0;
        }
        if(count==0)
        {
            printf("%d\n",a);
        }
    }
    getch();
    return 0;
}
