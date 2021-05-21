
/**
Problem - Wrtie a c program to implement Queue using Linkedlist.
Author - Suraj Jadli
Date - 12-05-2021
**/

#include<stdio.h>
#include<stdlib.h>

typedef struct queuelink{
    int data;
    struct queuelink* next;
}queue;

void insert(queue**,queue**);
void  serve(queue**,queue**);
void display(queue*);

int main()
{
    queue *f=NULL, *r=NULL;
    int ch;

    do
    {
     printf("\n\n \t\t\t\t Menu \n");
     printf("1.insert \t 2.serve \t 3.display \t 4.exit \n");
     printf("enter the choice => ");
     scanf("%d",&ch);

     switch(ch)
     {
         case 1 :        insert(&r,&f);
                          break;

         case 2 :      serve(&f,&r);
                          break;


        case 3 :    display(f);
                        break;

     }
    }while(ch<4);

    return 0;

}


void insert(queue** r,queue** f)
{
   queue* p = (queue*)malloc(sizeof(queue));

   if(p==NULL)
    printf("memory not allocated\n");
   else
   {
       int n;
       printf("enter the number => ");
       scanf("%d",&n);
       p->data = n;
       p->next = NULL;

       if(*r == NULL)
       {
         *r = *f = p;

       }
       else
       {
           (*r)->next = p;
           *r=p;
       }
   }
}

void serve(queue** f,queue** r)
{
    queue* p=*f;

    if(*f == NULL)
		printf("\n Queue is empty");

    else
    {
    printf("served => %d", p->data);

    (*f)=(*f)->next;

    if(*f == NULL)
        *r = NULL;

    free(p);
    }


}


void display(queue* f)
{
    while(f!= NULL)
    {
        printf("%d-->",f->data);
        f=f->next;
    }
    printf("NULL");
}

