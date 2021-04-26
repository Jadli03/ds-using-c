/**
Problem - Wrtie a c program to arrange negative and postive element of
          an array in alternate position
Author - Suraj Jadli
Date - 20-04-2021
**/


#include<stdio.h>

int main ()

{
    int n;
    scanf("%d",&n);

    int arr[n];

    ///taking elements from user
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);


    ///shifting all negative element onside
        int i=0;
        int j=n-1;
        while(i<j)
        {
            while (arr[i] < 0)
                i++;
            while (arr[j] > 0)
                j--;

            if(i<j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }


            i=1;
            int pos = 0;

            while(arr[pos] < 0)
                pos++;
            j=pos;

            while(arr[i] < 0 && j<n)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i +=2;
                j++;
            }


        for(int k=0; k<n; k++)
            printf("%d ",arr[k]);




    return 0;
}
