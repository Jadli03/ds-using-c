/**
Problem - Wrtie a c program to implement STACK
Author - Suraj Jadli
Date - 24-04-2021
**/

#include<stdio.h>
#define Max 5

int push(int [],int);
int  pop(int [],int);
void display(int [],int);
void peek(int [],int);

int main()
{
int stack[Max],top=-1,ch;

do
{
printf("\n Menu \n 1 push \t 2 pop \t\t 3 Display \t 4 Peek \t 5 exit\n");
printf("\nEnter your choice => ");
scanf("%d",&ch);

switch(ch)
{
case 1:     top= push(stack,top);
                break;
case 2:     top=pop(stack,top);
                break;
case 3:     display(stack,top);
                break;
case 4:     peek(stack,top);
                break;
}

}while(ch<5);

}

int  push(int s[],int top)
{
    if(top == Max-1)
    {
        printf("STACK OVERFLOW\n");
    }
    else
    {
        int x;
        printf("enter the element => ");
        scanf("%d",&x);

        top++;
        s[top] = x;
    }
    return top;
}

int  pop(int s[],int top)
{
    if(top == -1)
    {
        printf("STACK IS EMPTY\n");
    }
    else
    {
        int x = s[top];
        printf("popped = %d\n",x);
        top--;
    }
    return top;
}


void  display(int s[],int top)
{
    for(int i=top; i>=0; i--)
        printf("%d ", s[i]);
}


void peek(int s[],int top)
{
    if(top == -1)
        printf("STACK IS EMPTY\n");
    else
      printf("top element = %d",s[top]);
}
