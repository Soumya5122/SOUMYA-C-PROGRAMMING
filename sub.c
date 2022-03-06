#include<stdio.h>
int input(int a,int b)
{
  printf("enter a two number\n");
  scanf("%d%d",&a,&b);
  return 0;
}
void substract(int a,int b,int n)
{
  n=a-b;
}

void output(int a,int b,int n )
{
  printf("substraction of %d %d is %d\n",a,b,n);
}

int main()
{
  int a,b,n;
  input(a,b);
  sub(a,b);
  output(a,b,n);
  return 0;
}

