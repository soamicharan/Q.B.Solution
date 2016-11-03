#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f,g,h,i;
    printf("Enter Co-efficients of x^2 , x and constant.\n");
    scanf("%f %f %f",&a,&b,&c);  //scanning coefficients of x^2 in a,x in b and constant in c
    d=(b*b)-(4*a*c);  // d has value of determinant of quadric equation
    if(d>0)  // it checks that determinant is greater than zero or not
    {
        e=((-b)+sqrt(d))/2*a;     //it calculates the first root of quadric equation
        f=((-b)-sqrt(d))/2*a;       // it calculates the second root of quadric equation
        printf("The roots of quadric equation is %.2f and %.2f and real numbers.\n",e,f);  // it prints roots with 2 digit after decimal point
    }
    if(d==0)  // else if determinant is equal to zero or not
    {
        e=f=(-b)/2*a;  //because roots are equal then it calcualte same value thus it calculate only one root
        printf("The roots of quadric equation is %.2f and %.2f and real numbers and equal.\n",e,f);
    }
    else      //it executes when determinant is lesser than zero
    {
        printf("Input numbers are incorrect because its roots will complex number.\n");
        d=-d;   //to get real and imaginary part of root we will convert negetive determinant value in positive determinant value
         e=(-b);  // integer e stores the real part of first root
         g=sqrt(d)/2*a;       //integer g stores imaginary part of root
        f=(-b);  //integer f stores the real part of second root
        h=-sqrt(d)/2*a;        //integer h stores the imaginary part of second root
        printf("The roots of quadric equation is %.2f+(%.2f)i and %.2f+(%.2f)i\n",e,g,f,h);   // it prints real part seperate and imaginary part seperate but it add a "i" sign to imaginary part 
    }
}
