#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selectionSort(int arr[], int n)
{
    int i,j,min,temp;

    for(i=0;i<n-1;i++)
    {
        min=i;

        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[min])
            min=j;
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    int n,i;
    int *arr;
    clock_t start,end;
    double time_taken;

    printf("Enter number of elements (n > 5000): ");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));

    /* generate random numbers */
    for(i=0;i<n;i++)
    {
        arr[i] = rand()%10000;
    }

    start = clock();

    selectionSort(arr,n);

    end = clock();

    time_taken = ((double)(end-start))/CLOCKS_PER_SEC;

    printf("Time taken to sort %d elements = %f seconds\n",n,time_taken);

    free(arr);

    return 0;
}