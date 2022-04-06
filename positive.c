#include<stdio.h>
int main()
{
  int a;
  printf("enter the value\n");
  scanf("%d",&a);

  if(a>0)
  {
    printf("it is a positive number");
  }
  else
    {
      printf("it is a negative number");
    }
  return 0;
}