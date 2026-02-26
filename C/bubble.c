#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        printf("Pass %d: ", i+1);

        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        for(int k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = 5;

    bubbleSort(arr, n);

    printf("Final Sorted Array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}