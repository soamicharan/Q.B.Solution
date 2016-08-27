#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f,g,h,i;
    printf("Enter Co-efficients of x^2 , x and constant.\n");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        e=((-b)+sqrt(d))/2*a;
        f=((-b)-sqrt(d))/2*a;
        printf("The roots of quadric equation is %.2f and %.2f and real numbers.\n",e,f);
    }
    if(d==0)
    {
        e=f=(-b)/2*a;
        printf("The roots of quadric equation is %.2f and %.2f and real numbers and equal.\n",e,f);
    }
    if(d<0)
    {
        printf("Input numbers are incorrect because its roots will complex number.\n");
        d=-d;
         e=(-b);
         g=sqrt(d)/2*a;
        f=(-b);
        h=-sqrt(d)/2*a;
        printf("The roots of quadric equation is %.2f+(%.2f)i and %.2f+(%.2f)i\n",e,g,f,h);
    }
}
