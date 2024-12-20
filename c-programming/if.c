#include<stdio.h>
int main()
{
 int a=30;
 int b=20;
 int result;
 result=a-b;
 if(result>0)
 {
  printf("result %d is positive",result);
 }
  else
 {
  if(result<0)
  printf("result %d is negative",result);
  else
  printf("result %d is zero",result);
 }
  return(0);
 }
 

