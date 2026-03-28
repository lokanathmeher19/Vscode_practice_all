#include <stdio.h>

// function
int add(int a, int b) {
    return a + b;
}

int main() {
    int result;

    result = add(5, 3);

    printf("Sum = %d", result);

    return 0;
}