#include<stdio.h>
int main()
{
 int marks1, marks2,marks3;
  printf("enter the marks1\n");
  scanf("%d\n",&marks1);
  printf("enter the marks2\n");
  scanf("%dd\n",&marks2);
  printf("enter the marks3\n");
  scanf("%d\n",&marks3);

  float n= marks1+marks2+marks3/3;
  if(n>=40)
  {
    printf("you are pass\n");
  }
  else if(n<=40)
  {
    printf("you are fail\n");
  }
  else
  {
  printf("you are not eligible at all\n");  
  }
  return 0;
}