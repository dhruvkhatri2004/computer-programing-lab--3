#include <stdio.h>

int main() {
    int i, n, num, sum = 0;
    float mean;

    printf("Enter how many values: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for(i = 1; i <= n; i++) {
        printf("Value %d: ", i);
        scanf("%d", &num);
        sum = sum + num;
    }

    mean = sum / (float)n;   // typecast to float for correct mean

    printf("\nSum of %d values = %d\n", n, sum);
    printf("Mean of %d values = %.2f\n", n, mean);

    return 0;
}
