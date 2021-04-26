
/**
Problem - Wrtie a c program to find third repeating element.

Author - Suraj Jadli
Date - 20-04-2021
**/

#include<stdio.h>

int main ()
{
    int n;

    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);

    int r=0;
    int k=3;
    int in=-1;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == -1)
            continue;

        int f=1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
             f++;
             arr[j] = -1;
            }
        }

        if(f>1)
            r++;

            if(r==k)
               {
                   in =i;
                   break;
               }
    }

    printf("%d",in);


    return 0;
}
