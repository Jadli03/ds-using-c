/**
Problem - Wrtie a c program to implement Circular Queue
Author - Suraj Jadli
Date - 24-04-2021
**/

#include<stdio.h>
#define MAX 5
int insert(int[], int);
int serve(int[], int, int);
void display(int[], int, int);
void peek(int q[], int);

int main ()
{
    int cq[MAX],f=-1,r=-1;
    int ch;

    do
    {
     printf("\n\n \t\t\t\t Menu \n");
     printf("1.insert \t 2.serve \t 3.display \t 4.peek \t 5.exit \n");
     printf("enter the choice => ");
     scanf("%d",&ch);

     switch(ch)
     {
         case 1 :  if((r+1)%MAX == f)
                        printf("QUEUE IS FULL \n");
                    else
                    {
                        r = insert( cq,r );
                        if(f==-1)
                            f=0;
                    }
                      break;

         case 2 :   if(f==-1 && r == -1)
                        printf("QUEUE IS EMPTY");
                    else
                    {
                        f = serve( cq, f, r );
                        if(f==-1)
                            r = -1;
                    }
                          break;


        case 3 :    if(f==-1 && r == -1)
                        printf("QUEUE IS EMPTY");
                    else
                        display( cq, f, r );
                        break;

        case 4 :     if(f==-1 && r == -1)
                        printf("QUEUE IS EMPTY");
                    else
                        peek(cq,f);
                        break;
     }

    }while(ch < 5);

    return 0;
}

int insert(int cq[], int r)
{
    int x;
    printf("enter the element => ");
    scanf("%d",&x);

    r = (r+1) % MAX;
    cq[r] = x;

    return r;
}

int serve(int cq[], int f, int r)
{
    printf("served element => %d ", cq[f]);
    if(f == r)
        f = -1;
    else
        f = (f+1)%MAX;
    return f;
}

void display(int cq[], int f, int r)
{
    if(f<=r)
    {
        for(int i=f; i<=r; i++)
            printf("%d ", cq[i]);
    }
    else{
        for(int i=f; i<=MAX-1; i++)
            printf("%d ",cq[i]);
        for(int i=0; i<=r; i++)
            printf("%d ",cq[i]);
    }
}

void peek(int cq[], int f)
{
    printf("front = %d ", cq[f]);
}
