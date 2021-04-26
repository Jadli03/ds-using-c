#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    Toh(n,'A','B','C');

    return 0;
}

void Toh(int n,  char A, char B, char C)
{

    if(n==1)
    {
        printf("%c --> %c \n",A,C);
        return;
    }

     Toh(n-1,A,C,B);
     printf("%c --> %c \n",A,C);
     Toh(n-1,B,A,C);
}
