#include <stdio.h>
#include<stdlib.h>
#define SIZE 2

void enqueue(int);
void dequeue();
void display();
int queue[SIZE],front=-1,rear=-1;

void main()
{
   int value,choice;
   while(1)
   {
     printf("\n1.insertion \n2.deletion \n 3.Display \n4.Exit");
     printf("\n Enter your choice:");
     scanf("%d",&choice);
     switch(choice){
         case 1:printf("enter the value to be inserted:");
                scanf("%d",&value);
                enqueue(value);
                break;
         case 2:dequeue();
                break;
         case 3:display();
                break;
         case 4:exit(0);
         default:printf("wrong selection");
        }
  }
}
void enqueue(int value)
{
    if(rear==SIZE-1)
    printf("Queue overflow");
    else{
      if(front==-1)
         front=0;
         rear++;
         queue[rear]=value;
         printf("insertion sucess");
     }
}
void dequeue()
{
int item;   
    if (front == -1 || front > rear)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        printf("\n  deleted %d ",item);  
    }  
      
      
}  

void display()
{
   if(rear==-1)
   printf("queue is empty:");
   else
   {
     int i;
     printf("queue elments are:");
     for(i=front;i<=rear;i++)
      printf("%d\n",queue[i]);
   }
}

       

