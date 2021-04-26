
/**
Problem - Wrtie a c program to arrange negative and postive element of
          an array in alternate position
Author - Suraj Jadli
Date - 20-04-2021
**/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    int k=3, nr=0; /// kth non-repeating element
    int i,j;
    int  in=-1;
    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
            if(i!=j && arr[i] == arr[j])
                break;
        if(j == n)
            nr++;
        if(nr == k)
        {
             in= arr[i];
             break;
        }

    }

    printf("%d",in);


    return 0;
}
