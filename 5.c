#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float s1,s2,s3,S,area;
    printf("Enter sides of Triangle.\n");
    scanf("%f%f%f",&s1,&s2,&s3);
    S=(s1+s2+s3)/2;
    area=sqrt(S*(S-s1)*(S-s2)*(S-s3));
    if(area>0)
        printf("Area of Triangle = %.3f",area);
    else
        printf("It is Impossible triangle.\nTry again.");
    getch();
    return 0;
}
