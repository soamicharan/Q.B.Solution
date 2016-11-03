#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x,a,b,exp_man,fact;
    exp_man=0;           //exp_man is initializing with zero
    printf("Enter x.\n");
    scanf("%f",&x);
    for(a=1;a<=22;a++)           //this for loop terminating condition is given upto 22 but we can give bigger terminating condition for more precise result
    {
        fact=1;
        for(b=a;b>0;b--)       //this for loop calculating the factorial of value a
        {
            fact=fact*b;
        }
        exp_man=(pow(x,a)/fact)+exp_man;     // this calculates the expotential value manually
    }
    printf("Expotential calculated by loop = %f.\n",exp_man+1);
    printf("Expotential value calculated by exp(x) library function = %f.\n",exp(x)); //we printing expotential value by using library function
    printf("Difference between the expotential value calculated by loop and library function = %f.\n",exp(x)-(exp_man+1)); //this shows the difference of manually calculated and library calculated expotential value
    getch();
    return ;
}
