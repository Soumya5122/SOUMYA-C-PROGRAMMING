#include<stdio.h>
int main()
{
  int factorial=1;
  int n=1;
  for(int i= 1;i<=n;i++)
    {
      factorial*=i;
    }
  printf("the value of factorial is %d",factorial);
  return 0;
}