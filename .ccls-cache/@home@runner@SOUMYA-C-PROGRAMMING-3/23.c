#include<stdio.h>
#include<math.h>
int input()
{
  double a,b,c;
  printf("enter the three numbers\n");
  scanf("%ls,%ls, %ls\n",&a,&b,&c);
  return a,b,c;
}

void average(int a,int b,int c,int avg)
{
  
  avg=(a+b+c)/3.0;
  
}

void output(int result)
{
  printf("the average of three numbers   is %0.2f\n",result);
}

int main()
{
  double a,b,c,result;
  input(a,b,c);
  avg=average(a,b,c);
  output(result);
  return 0;
  
}