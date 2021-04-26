/**
Problem - Wrtie a c program to implement Queue
Author - Suraj Jadli
Date - 26-04-2021
**/

#include<stdio.h>
#define MAX 5
int insert(int[],int);
int serve(int[], int, int);
void display(int[], int, int);
void peek(int q[], int);


int main()
{
    int q[MAX];
    int ch,f=-1, r=-1;

    do
    {
     printf("\n\n \t\t\t\t Menu \n");
     printf("1.insert \t 2.serve \t 3.display \t 4.peek \t 5.exit \n");
     printf("enter the choice => ");
     scanf("%d",&ch);

     switch(ch)
     {
         case 1 :  if(r == MAX-1)
                        printf("QUEUE IS FULL \n");
                    else
                    {
                        r = insert( q, r );
                        if(r==0)
                            f=0;
                    }
                      break;

         case 2 :   if(f==-1 && r == -1)
                        printf("QUEUE IS EMPTY");
                    else
                    {
                        f = serve( q, f, r );
                        if(f==-1)
                            r = -1;
                    }
                          break;


        case 3 :    if(f==-1 && r == -1)
                        printf("QUEUE IS EMPTY");
                    else
                        display( q, f, r );
                        break;

        case 4 :     if(f==-1 && r == -1)
                        printf("QUEUE IS EMPTY");
                    else
                        peek(q,f);
                        break;
     }
    }while(ch<5);

    return 0;

}


int insert(int q[],int r)
{
    int x;
    printf("enter the element => ");
    scanf("%d",&x);

     r++;
     q[r] = x;
    return r;
}

int serve(int q[], int f, int r)
{
    printf ("served element = %d ", q[f]);

    if(f == r)
        f = -1;
    else
        f++;

    return f;
}


void display(int q[], int f, int r)
{
    for(int i=f; i<=r; i++)
        printf("%d ", q[i]);
}

void peek(int q[], int f)
{
    printf("front element = %d ", q[f]);
}
