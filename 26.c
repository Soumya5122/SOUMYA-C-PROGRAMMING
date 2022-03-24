#include<stdio.h>

//sum of natural numbers=1 + 2+ 3+.......+(n-1)+n
 sum=sum(n-1)+n//

int input()
{
  int n;
  printf("enter a number");
  scanf("%d"&n);
}
int sum()
{
  int sum,n;
  for(int i=1,i<=5;i++)
  {
  sum=sum(n-1)+n;
    }
  return sum;
}
void output()
{
  printf("%d the sum of n natural numbers",sum);
}
int main()
{
  int n,sum;
  input(n);
  sum(sum(n-1)+n);
  output(sum);
}

