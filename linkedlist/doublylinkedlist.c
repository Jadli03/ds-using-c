#include<stdio.h>
#include<stdlib.h>

typedef struct List
{
    int data;
    struct List* prev;
    struct List* next;
}node;

void insert(node** left,node** right)
{
    node* p = NULL;
    p = (node*)malloc(sizeof(node));

    if(p==NULL)
        printf("MEMORY NOT ALLOCATED \n");
    else
    {
        int x;
        printf("enter a element => ");
        scanf("%d",&x);
        p->data = x;
        p->next = NULL;
        p->prev = NULL;

        if(*left==NULL && *right == NULL)
        {
            *left = *right = p;
        }
        else
        {
            (*right)->next = p;
            p->prev = *right;
            *right = p;
        }
    }
}

void deletee(node** left, node** right, int k)
{
    int loc=1;
    node* p = *left;

    while(p->data!=k && p->next !=NULL)
    {
        p = p->next;
        loc++;
    }

    if(p->next == NULL && p->data != k)
    {
        printf("key not found \n");
    }
    else
    {
        printf("key is found at location %d and deleted", loc);
        if(p == *left)
        {
            *left = (*left)->next;
            (*left)->prev = NULL;
        }
        else if(p==*right)
        {
         *right = (*right)->prev;
         (*right)->next = NULL;
        }
        else
        {
            p->prev->next = p->next;
            p->next->prev = p->prev;
        }
         free(p);
    }
}

void display_forward(node*left)
{
    while(left!=NULL)
    {
        printf("%d-->",left->data);
       left= left->next;
    }
    printf("NULL");
}

void display_backward(node* right)
{
    while(right!=NULL)
    {
        printf("%d-->",right->data);
        right = right -> prev;
    }
    printf("NULL");
}


int main()
{
    node *left=NULL, *right=NULL;
    int ch,x;

    do
    {
     printf("\n\n \t\t\t Doubly LinkedList Menu \n");
     printf("1.insert \t 2.delete \t 3.display forward \t 4.display backward \t 5.exit \n");
     printf("enter the choice => ");
     scanf("%d",&ch);
      switch(ch)
      {

        case 1 :  insert(&left,&right);
                          break;

        case 2 :    if(left == NULL)
                        printf("LIST IS EMPTY");
                    else
                    {
                        printf("Enter the key => ");
                        int k;
                        scanf("%d",&k);
                      deletee(&left,&right,k);
                    }
                        break;

        case 3 :    if(left == NULL)
                    printf("LIST IS EMPTY\n");
                    else
                    display_forward(left);
                        break;

        case 4 :    if(right== NULL)
                    printf("LIST IS EMPTY\n");
                    else
                    display_backward(right);
                        break;

      }
    }while(ch < 5);



    return 0;
}
