#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello, World!\n");
    int *x = malloc(10*sizeof(int));
    x[12] = 6;
    return 0;
}