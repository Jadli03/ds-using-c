
/**
Problem - Wrtie a c program to implement static singly linked list.
Author - Suraj Jadli
Date - 28-04-2021
                 ________     ________     ________
        head --> |A|next| --> |B|next| --> |C|NULL|
                 |_|____|     |_|____|     |_|____|

        (- _ -) : next is adrress of next node
**/

#include<stdio.h>

typedef struct node
{
    int data;
    struct node* next;
}Node;

int main()
{
    Node A,B,C,*head = NULL;

    ///seting the data of each node
    A.data = 1;
    B.data = 2;
    C.data = 3;

    ///seting the address of each node

    A.next = &B;
    B.next = &C;
    C.next = NULL;
    head = &A;     ///setting address of A to head pointer

    ///printing element of static linked list

        while(head!=NULL)
        {
            printf("%d-->",head->data);
            head = head->next;
        }
        printf("NULL");


    return 0;
}
