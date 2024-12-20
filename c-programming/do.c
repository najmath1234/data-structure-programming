#include<stdio.h>
int main()
{
 int i=1;
 int sum=0;
 do
  {
    sum=sum+i;
    i=i+1;
  }
   while(i<=1000);
   printf("sum=%d",sum);
   return(0);
}

