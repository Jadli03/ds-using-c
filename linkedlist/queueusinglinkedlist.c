/**
Problem - Wrtie a c program to implement Queue using Linkedlist.
Author - Suraj Jadli
Date - 05-05-2021
**/

#include<stdio.h>
#include<stdlib.h>

typedef struct queuelink{
    int data;
    struct queuelink* next;
}queue;

queue* insert(queue*,int);
queue* serve(queue*);
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
         case 1 :     printf("enter the element => ");
                      int n;
                      scanf("%d", &n);
                        r = insert(r,n);
                            if(f==NULL)
                                f=r;
                      break;

         case 2 :   if(f==NULL && r == NULL)
                        printf("QUEUE IS EMPTY");
                    else
                    {
                        f = serve(f);
                            if(f==NULL)
                                r=NULL;
                    }
                          break;


        case 3 :    if(f==NULL && r == NULL)
                        printf("QUEUE IS EMPTY");
                    else
                        display(f);
                        break;

     }
    }while(ch<4);

    return 0;

}


queue* insert(queue* r,int n)
{
   queue* p = (queue*)malloc(sizeof(queue));

   if(p==NULL)
    printf("memory not allocated\n");
   else
   {
       p->data = n;
       p->next = NULL;

       if(r == NULL)
         r = p;
       else
       {
           r->next = p;
           r=p;
       }
   }

   return r;
}

queue* serve(queue* f)
{
    queue* p=f;

    printf("served => %d", p->data);

    f=f->next;

    free(p);

    return f;
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

