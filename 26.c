#include<stdio.h>

//sum of natural numbers=1 + 2+ 3+.......+(n-1)+n ,sum=sum(n-1)+n
 //

int sum();

int main()
{
  
  printf("the sum of 5 n natural numkbers is %d",sum(5));
  
}

int sum(int n)

{
  if(n==1)
  {
    return 1;
  }
  return sum(n-1)+n;
}