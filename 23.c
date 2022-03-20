#include<stdio.h>
#include<math.h>
int input()
{
  float a,b,c;
  printf("enter the three numbers\n");
  scanf("%f,%f, %f\n",&a,&b,&c);
  return a,b,c;
}

float average(float a,float b,float c)
{
  float avg;
  avg=(a+b+c)/3.0;
  return avg;
}

void output(float a,float b,float c,float result)
{
  printf("the average of  (%f + %f + %f)/3 is %f\n",a,b,c,result);
}

int main()
{
  float a,b,c,result;
  input(a,b,c);
  result=average(a,b,c);
  output(a,b,c,result);
  return 0;
  
}