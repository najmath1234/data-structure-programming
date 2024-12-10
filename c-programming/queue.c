#include<stdio.h>
#include<stdlib.h>
#define max 4
int queue[max];
void enqueue();
void dequeue();
void traversal();
int front=-1;
int rear=-1;

int main()
{
  int choice;
  do
  {
    printf("enter the choice:");
    scanf("%d", &choice);
    switch(choice)
    {
          case 1:
                enqueue();
                break;
          case 2:
                dequeue();
                break;
          case 3:
                traversal();
                break;
          case 4:
                printf("exit");
                break;
          default:
                printf("wrong choice:");
     }
  }
       while(choice!=4);
       return(0);
}
void enqueue()
{
   int item;
   if(rear=max-1)
   printf("queue is full\n");
   else 
   {
       if(front==-1)
       front++;
       printf("enter the item to be inserted\n:");
       scanf("%d",&item);
       rear=rear++;
       queue[rear]=item;
   }
}
void dequeue()
{
     int item;
     if(front==-1)
     printf("queue is empty\n");
     else
     {
         item=queue[item];
         front=front-1;
         printf("the item deleted is %d",&item);
     }
}
void traversal()
{
    int i;
    if(front==-1)
    printf("queue is empty\n");
    else
    {
        for(i=front;i<max;i++)
       {
            printf("queue[i]");
       }
    }  
}




         
   
 

