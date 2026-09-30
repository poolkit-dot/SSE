#include <stdio.h>

void swap(int *n1, int *n2);

int main() {
    int num1 = 5, num2 = 10;

    swap(&num1, &num2);

    printf("After swapping:\nnum1 = %d\nnum2 = %d\n", num1, num2);
    return 0;
}

void swap(int *n1, int *n2) {
    int temp;
    temp = *n1; 
    *n1 = *n2;
    *n2 = temp;
}