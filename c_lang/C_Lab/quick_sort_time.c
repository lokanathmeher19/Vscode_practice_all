#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void quickSort(int arr[], int low, int high)
{
    int i=low, j=high, pivot, temp;

    pivot = arr[(low+high)/2];

    while(i<=j)
    {
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;

        if(i<=j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }

    if(low<j)
        quickSort(arr,low,j);

    if(i<high)
        quickSort(arr,i,high);
}

int main()
{
    int n,i;
    int *arr;
    clock_t start,end;

    printf("Enter n (>5000): ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        arr[i]=rand()%10000;

    start=clock();
    quickSort(arr,0,n-1);
    end=clock();

    printf("Time taken = %lf seconds\n",(double)(end-start)/CLOCKS_PER_SEC);

    free(arr);
}