#include<stdio.h>
int main()
{
  float r,area;
  printf("enter the side\n");
  scanf("%f",&r);

  area=4*3.14*r*r;
  printf("area of the sphere %f",area);
  return 0;
}