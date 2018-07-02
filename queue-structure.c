#include<stdio.h>
#include<stdlib.h>
#define size 5
void menu();
void push();
void pop();
void display();
struct stack
{
  int input[size];
  int top;
}

int main()
{
  menu();
  return 0;
}

void menu()
{
  struct stack new;
  new.top=-1;
  int choice;
  printf("Enter the option.\n");
  printf(" 1. Push\n 2. Pop\n 3. Display\n 4. Exit\n");
  scanf("%d",&choice);
  if(choice==1)
  {
    push();
    menu();
  }
  if(choice==2)
  {
    pop();
    menu();
  }
  if(choice==3)
  {
    display();
    menu();
  }
    if(choice==4)
      exit(0);
    else
    {
      printf("Please enter a valid option.\n");
      menu();
    }
}

void push( struct stack *p )
{
  if(p->top==size)
    printf("Stack is full.\n");
  else
  {
    p->top=p->top+1;
    printf("Enter the element.\n");
    scanf("%d",p->input[p->top]);
  }
}

void pop( struct stack *p )
{
  if(p->top<0)
    printf("Stack is underflow.\n");
  else
    p->top=p->top-1;
}

void display( struct stack *p )
{
  int i;
  if(p->top<0)
    printf("Stack is underflow.\n");
  else
  {
    for(i=0;i<=p->top;i++)
      printf("%d\n",p->input[i]);
  }
}
    
