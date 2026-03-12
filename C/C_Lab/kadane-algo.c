#include <stdio.h>

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = 9;

    int max = arr[0], current = arr[0];

    for (int i = 1; i < n; i++) {
        if (current + arr[i] > arr[i])
            current = current + arr[i];
        else
            current = arr[i];

        if (current > max)
            max = current;
    }

    printf("Maximum Sum = %d", max);
}