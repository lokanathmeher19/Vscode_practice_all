#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int arr[],int l,int m,int r)
{
    int i=l,j=m+1,k,temp[100000];

    for(k=l;i<=m && j<=r;k++)
    {
        if(arr[i]<arr[j])
            temp[k]=arr[i++];
        else
            temp[k]=arr[j++];
    }

    while(i<=m)
        temp[k++]=arr[i++];

    while(j<=r)
        temp[k++]=arr[j++];

    for(i=l;i<=r;i++)
        arr[i]=temp[i];
}

void mergeSort(int arr[],int l,int r)
{
    int m;

    if(l<r)
    {
        m=(l+r)/2;

        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);

        merge(arr,l,m,r);
    }
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
    mergeSort(arr,0,n-1);
    end=clock();

    printf("Time taken = %lf seconds\n",(double)(end-start)/CLOCKS_PER_SEC);
}