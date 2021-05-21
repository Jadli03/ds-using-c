
/**
Problem - Wrtie a c program to implement singly linked list.
Author - Suraj Jadli

**/

#include<stdio.h>
#include<stdlib.h>

typedef struct Linkedlist
{
    int data;
    struct Linkedlist *next;

}node;



node* insert(node* right, int d)
{
    node* p = (node*)malloc(sizeof(node));
    if(p!=NULL)
    {
        p->data = d;

        if(right == NULL)
        {
            right = p;
            right->next = p;
        }
        else{
            p->next = right->next;
            right->next = p;
            right=p;
        }
    }

    return right;
}


node* serve(node*left, node* right)
{
    node* p = left;
    if(p->next == NULL)
    {
        left = NULL;
    }
    else
    {
      printf("serverd %d",p->data);
        left=left->next;
        right->next = left;
    }

    free(p);
    return left;
}


void display(node *left)
{

        node * p = left;
       do{
        printf("%d-->",p->data);
        p = p->next;
       }while(p!=left);
       printf("NULL\n");
}



int main()
{
    node *left=NULL, *right=NULL;
    int ch,x;

    do
    {
     printf("\n\n \t\t\t Singly LinkedList Menu \n");
     printf("1.insert \t 2.delete \t 3.display \t 4.exit \n");
     printf("enter the choice => ");
     scanf("%d",&ch);
      switch(ch)
      {

        case 1 :
                    printf("\nenter the data => ");
                    int x;
                    scanf("%d", &x);
                    right = insert(right, x);
                        if(left == NULL)
                            left = right;
                           break;

        case 2 :    if(left == NULL)
                        printf("LIST  IS EMPTY\n");
                    else{
                      left = serve(left,right);
                        if(left == NULL)
                            right = NULL;
                    }
                        break;

        case 3 :     if(left == NULL)
                        printf("NULL");
                    else
                        display(left);
                        break;

      }
    }while(ch < 4);



    return 0;
}
