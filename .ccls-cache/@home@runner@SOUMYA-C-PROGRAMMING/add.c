#include<stdio.h>
int input()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}

int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}
void output(int a,int b,int sum)
{
  printf("addition of two numbers %d%d is %d\n",a,b,&sum);
}

int main()
{
  int a,b ,sum;
  input(a,b);
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}