#include <stdio.h>

void swap(int *,int *);

int main() {
    int one = 1;
    int two = 2;
    swap(&one, &two);
    printf("After swapping one is: %d, two is: %d\n", one, two);
    return 0;
}

void swap(int * a, int * b) {
    int temp;
    temp = * a;
    * a = * b;
    * b = temp;
}
