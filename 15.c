#include<stdio.h>
int main()
{
  long long int z,a=0,b=1,i,j,k,y;
  printf("Enter range of fibonacci series: ");
  scanf("%llu",&y);
  printf("0\n1\n");
  for(z=1;z<=y;z++)
  {
      i=a;
      j=b;
      k=i+j;
      printf("%llu\n",k);
      a=b;
      b=k;
  }
  getch();
  return 0;
}
