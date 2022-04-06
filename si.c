#include<stdio.h>
int main()
{
  //t=time, p=intial principal balance,r=annual rate
  int t;
  float p,r,i;
  printf("enter the values\n");
  scanf("%f%f%d",&p,&r,&t);

  i=(p*r*t)/100;
  printf("simple interest is %f",i);
  return 0;
}