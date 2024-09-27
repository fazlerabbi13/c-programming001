#include <stdio.h>

int main() {
    int myAgg = 22;
    int* ptr = &myAgg;

    printf("%p\n", ptr);

    printf("%d\n", *ptr);

    return 0;
}