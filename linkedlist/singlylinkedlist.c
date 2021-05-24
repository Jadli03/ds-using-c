/**
Problem - Wrtie a c program to implement singly linked list.
Author - Suraj Jadli

**/

#include<stdio.h>
#include<stdlib.h>

typedef struct Linkedlist
{
    int data;
    struct Linkedlist* next;

}node;

///function to insert at tail or right of linked list

node* insertAtRight(node* right, int d)
{
    node* p = (node*)malloc(sizeof(node));
    if(p!=NULL)
    {
        p->data = d;
        p->next = NULL;

        if(right == NULL)
            right = p;
        else{
            right->next = p;
            right  = p;
        }
    }

    return right;
}

///function to insert at head or left of linked list
node* insertAtLeft(node* left, int d)
{
    node* p = (node*)malloc(sizeof(node));
    if(p!=NULL)
    {
        p->data = d;
        p->next = NULL;

        if(left == NULL)
            left = p;
        else{
            p->next = left;
            left = p;
        }
    }


    return left;
}

/// function to get user data to insert into linked list
int getData()
{
    int x;
    printf("\nenter the data => ");
    scanf("%d", &x);

    return x;
}

/// function to display linked list
void display(node *left)
{
    if(left == NULL)
        printf("NULL");
    else
    {
        while(left != NULL)
        {
            printf("%d-->",left->data);
            left = left->next;
        }
        printf("NULL");
    }
}

/// function to reverse a linked list using  recursion
node* recusrion_rev(node* head)
{
    if(head == NULL || head->next == NULL)
        return head;

    node* newHead = recusrion_rev(head->next);
        node* q = head->next;
        q->next = head;
        head->next = NULL;

    ///for above three line we can write below two line
    /// head->next->next = head;
     ///head -> next = NULL;

     return newHead;
}

///function to reverse linked list  using iterative method

node* reverse(node* left)
 {
     node *current,*prev,*nextt;
     prev = NULL;
     current = left;

     while(current != NULL)
     {
         nextt = current->next;
         current->next = prev;
         prev = current;
         current = nextt;
     }
    left = prev;
     return left;
 }


int main()
{
    node *left=NULL, *right=NULL;
    int ch,x;

    do
    {
     printf("\n\n \t\t\t Singly LinkedList Menu \n");
     printf("1.insertAtRight\n 2.insertAtLeft\n 3.display\n 4.reverse using recursion\n 5. reverse using iterative method\n 6. exit \n");
     printf("enter the choice => ");
     scanf("%d",&ch);
      switch(ch)
      {

        case 1 :    x = getData();
                    right = insertAtRight(right, x);
                        if(left == NULL)
                            left = right;
                          break;


        case 2:     x = getData();
                    left = insertAtLeft(left, x);
                        break;

        case 3 :    display(left);
                        break;

        case 4 :    right = left;
                    left = recusrion_rev(left);
                    break;

        case 5 :    right = left;
                    left = reverse(left);
                    break;

      }
    }while(ch < 6);



    return 0;
}
