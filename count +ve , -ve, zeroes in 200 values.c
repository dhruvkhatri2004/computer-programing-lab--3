#include <stdio.h>

int main() {
    int i, num;
    int positive = 0, negative = 0, zeros = 0;

    printf("Enter 200 values:\n");

    for(i = 1; i <= 200; i++) {
        printf("Value %d: ", i);
        scanf("%d", &num);

        if(num > 0) {
            positive++;
        } else if(num < 0) {
            negative++;
        } else {
            zeros++;
        }
    }

    printf("\nCount of positive numbers = %d\n", positive);
    printf("Count of negative numbers = %d\n", negative);
    printf("Count of zeros = %d\n", zeros);

    return 0;
}
