#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x,a,b,exp_man,fact;
    exp_man=0;
    printf("Enter x.\n");
    scanf("%f",&x);
    for(a=1;a<=22;a++)
    {
        fact=1;
        for(b=a;b>0;b--)
        {
            fact=fact*b;
        }
        exp_man=(pow(x,a)/fact)+exp_man;
    }
    printf("Expotential calculated by loop = %f.\n",exp_man+1);
    printf("Expotential value calculated by exp(x) library function = %f.\n",exp(x));
    printf("Difference between the expotential value calculated by loop and library function = %f.\n",exp(x)-(exp_man+1));
    getch();
    return ;
}
