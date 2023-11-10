#include<stdio.h>
#include<stdlib.h>
#define SIZE 2
void push(int);
void pop();
void display();
int stack[SIZE],top=-1;
void main()
{
   int value,choice;
   while(1)
   {
     printf("\n1.push\n2.pop\n 3.display\n 4.exit\n");
     printf("enter your choice");
     scanf("%d",&choice);
     switch(choice){
           case 1:printf("enter the value to be insert:");
                 scanf("%d",&value);
                 push(value);
                 break;
           case 2:pop();
                 break;
           case 3:display();
                 break;
           case 4:exit(0);
           default:printf("wrong selection!\n");
           }
     }
}
void push(int value)
{
  if(top==SIZE-1)
  printf("stack is full!!\n");
  else
  {
    top++;
    stack[top]=value;
    printf("insertion possible\n");
  }
}
void pop()
{
  if(top==-1)
  printf("stack is empty:\n");
  else
  {
    printf("deleted :%d",stack[top]);
    top--;
  }
}
void display()
{
  if(top==-1)
    printf("stack is empty\n");
  else
  {
    int i;
    printf(" stack elemets are:!!\n");
    for(i=top;i>=0;i--)
      printf("%d\n",stack[i]);
  }
}
  
   
