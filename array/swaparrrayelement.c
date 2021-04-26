
/**
Problem - Wrtie a c program to reverse the contenet of an array
Author - Suraj Jadli
Date - 20-04-2021
**/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

   /// taking the elements
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    ///reversing the elements of an array
    for(int i=0; i<n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    ///printing the elements of an array
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}
