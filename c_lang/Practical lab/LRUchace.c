#include <stdio.h>

int cache[5];
int size = 0;

void put(int value) {
    if(size < 5) {
        cache[size++] = value;
    } else {
        for(int i=1;i<5;i++)
            cache[i-1] = cache[i];
        cache[4] = value;
    }
}

void display() {
    for(int i=0;i<size;i++)
        printf("%d ",cache[i]);
}

int main() {
    put(1);
    put(2);
    put(3);
    put(4);
    put(5);
    put(6);

    display();
}