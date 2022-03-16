#include<stdio.h>
int main()
{
  int age =16;
  int passcode=19;
  if(age>18){
    printf("the person is eligible for driving\n");
  }
  else if(age<18){
    printf("you are not eligible for driving\n");
  }
  else{
    printf("you cannot  drive at all\n");
  }
  return 0;
}