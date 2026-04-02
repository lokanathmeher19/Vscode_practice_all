#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 2, 3, 1};

    for(int i = 0; i < 5; i++) {
        int count = 1;

        if(arr[i] == -1) continue;

        for(int j = i + 1; j < 5; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }

        printf("%d → %d times\n", arr[i], count);
    }

    return 0;
}