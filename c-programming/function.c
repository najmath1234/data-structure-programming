#include<stdio.h>
int sum(int,int); //function declaration
int main()
{
 int num1=10;
 int num2=20;
 int result;
 result=sum(num1,num2); //function call
 printf("%d",result);  //result is returned and printed
 return(0);
}
 int sum(int num1,int num2);
 {
   int result;   //function executing and return to the function call
   result=num1+num2;
   return(result);
 }
  
 
