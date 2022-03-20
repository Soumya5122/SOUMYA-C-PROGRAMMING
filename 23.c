#include<stdio.h>
#include<math.h>
int input()
{
  float a,b,c;
  printf("enter the three numbers\n");
  scanf("%f,%f, %f\n",&a,&b,&c);
  return a,b,c;
}

int average(int a,int b,int c)
{
  int avg;
  avg=(a+b+c)/3;
  return avg;
}

void output(int a,int b,int c,int result)
{
  printf("the average of  %f + %f + %f/3 is %f\n",a,b,c,result);
}

int main()
{
  int a,b,c,result;
  input(a,b,c);
  result=average(a,b,c);
  output(a,b,c,result);
  return 0;
  
}