/**
Problem - Wrtie a c program to print frequency of each number
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

    for(int i=0; i<n; i++)
    {
        int c = 1;
        if(arr[i] == -1)
            continue;

        for(int j=i+1; j<n; j++)
        {

            if(arr[i] == arr[j])
            {
                c++;
                arr[j] = -1;
            }
        }

        printf("%d repating %d times\n", arr[i],c);
    }

    return 0;
}
