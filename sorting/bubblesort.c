#include<stdio.h>
#define MAX 100

void bubble_sort(int arr[], int);

int main()
{
    int arr[MAX],n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);


    bubble_sort(arr,n);

    for(int i=0; i<n; i++)
    printf("%d ", arr[i]);
    return 0;
}

void bubble_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
