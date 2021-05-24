#include<stdio.h>
#define MAX 100

void selection_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }

        if(min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main()
{
    int arr[MAX];
    int n;

    scanf("%d", &n);

    for(int i=0; i<n;i++)
        scanf("%d", &arr[i]);

    selection_sort(arr,n);

    for (int i=0; i<n; i++)
            printf("%d ", arr[i]);
    return 0;
}
