#include <stdio.h>

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min])
                min = j;
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        printf("Pass %d: ", i+1);
        for(int k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = 5;

    selectionSort(arr, n);

    printf("Final Sorted Array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}