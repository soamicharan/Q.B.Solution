#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    // this program algorithm is based on the heron's formula
    float s1,s2,s3,S,area;
    printf("Enter sides of Triangle.\n");
    scanf("%f%f%f",&s1,&s2,&s3); 
    S=(s1+s2+s3)/2;         //by  heron's formula it is calculating value of S
    area=sqrt(S*(S-s1)*(S-s2)*(S-s3));     //By heron's formula it calculates the area of trangle
    if(area>0)                            
        printf("Area of Triangle = %.3f",area);
    else                //if area of triangle is equal or lesser than zero then the enter length of trangle is impossible to form
        printf("It is Impossible triangle.\nTry again.");
    getch();
    return 0;
}
