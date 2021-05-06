/**
Problem - Wrtie a c program to implement STACK using Linkedlist.
Author - Suraj Jadli
Date - 05-05-2021
**/
#include<stdio.h>
#include<stdlib.h>

typedef struct stacklink
{
    int data;
    struct stacklink* next;
}stack;

stack* push(stack*, int);
stack* pop(stack*);
void display(stack*);

stack*  push(stack* top, int n)
{
    stack* p=(stack*)malloc(sizeof(stack*));

    if(p==NULL)
        printf("memory not allocated");
    else
    {
    p->data = n;
    p->next = NULL;

    if(top == NULL)
        top = p;
    else
    {
        p->next = top;
        top = p;
    }
    }
    return top;

}

stack* pop(stack* top)
{
    stack* p = top;

    printf("poped => %d",p->data);

    top = top -> next;
    free(p);
    return top;
}

 void display(stack* top)
 {
        while(top!= NULL)
        {
            printf("%d-->",top->data);
            top = top->next;
        }
        printf("NULL");

 }


int main()
{
int ch;
stack* top = NULL;
do
{
printf("\n Menu \n 1 push \t 2 pop \t\t 3 Display \t 4 exit\n");
printf("\nEnter your choice => ");
scanf("%d",&ch);

switch(ch)
{
case 1:     printf("enter the element => ");
            int n;
            scanf("%d",&n);
            top= push(top,n);
                break;

case 2:     if(top == NULL)
                printf("STACK IS EMPTY\n");
            else
            top=pop(top);
                break;

case 3:    if(top == NULL)
                printf("STACK IS EMPTY\n");
            else
                display(top);
                break;
}

}while(ch<4);

    return 0;
}
