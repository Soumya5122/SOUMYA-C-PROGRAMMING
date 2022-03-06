#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter a two number\n");
  scanf("%d%d",a,b);
  
}
void add(int *a,int *b,int *sum)
{
  *sum=a+b;
}

void output(int a,int b,int sum)
{
  printf("addition of %d %d is %d\n",a,b,sum);
}

int main()
{
  int a,b,sum;
  input(&a,&b);
  addition(a,b);
  output(a,b,sum);
  return 0;
}

