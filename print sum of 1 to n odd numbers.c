#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            sum = sum + i;
        }
    }

    printf("Sum of odd numbers from 1 to %d = %d\n", n, sum);

    return 0;
}
