#include<stdio.h>

/* 1 1 2 3 5 8 ..
fib(1) fib(1+1) fib(1+2)...*/
int input()
{
int a =1;
printf("enter a number %d\n",a);
return a;
  }

  int fib()
  {
    int a1;
    int a=1;
    for(int i=1;i<=1;i++)
      {
        a1=(a+i);
        
      }
    return a1;
  }

  void output()
  {
    int a,i,a1;
    printf("the fibonnaci series of %d +%d is %d\n",a,i,a1);
  }

  int main()
  {
    int i, n,a,a1;
    input(n);
    a1 =fib(a);
    output(a,i,a1);
    return 0;
  }