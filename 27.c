#include<stdio.h>

int sum(int);

int main()
{
  printf("%d the sum of first 5 n natural numbers",sum(5));
return 0;
}

int sum(int n)
{
  if(n==1)
  {
    return 1;
  }
  return sum(n-1)+n;
}