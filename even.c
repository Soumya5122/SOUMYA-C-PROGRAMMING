#include<stdio.h>
int main()
{
  int a;
  printf("enter a value\n");
  scanf("%d",&a);
  if(a%2==0)
  {
    printf("it is even");
  }
  else
  {
    printf("it is odd");
  }
  return 0;
}
