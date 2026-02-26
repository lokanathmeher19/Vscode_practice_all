#include <stdio.h>

void printArray(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void merge(int arr[], int l, int m, int r, int n){
    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1], R[n2];

    for(int i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(int j=0;j<n2;j++)
        R[j]=arr[m+1+j];

    int i=0,j=0,k=l;

    while(i<n1 && j<n2){
        if(L[i]<=R[j])
            arr[k++]=L[i++];
        else
            arr[k++]=R[j++];
    }

    while(i<n1)
        arr[k++]=L[i++];
    while(j<n2)
        arr[k++]=R[j++];

    printf("After Merge: ");
    printArray(arr,n);
}

void mergeSort(int arr[], int l, int r, int n){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(arr,l,m,n);
        mergeSort(arr,m+1,r,n);
        merge(arr,l,m,r,n);
    }
}

int main(){
    int arr[]={5,2,9,1,6};
    int n=5;

    mergeSort(arr,0,n-1,n);

    printf("Final Sorted Array: ");
    printArray(arr,n);

    return 0;
}