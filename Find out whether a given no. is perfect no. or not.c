#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // find factors up to num/2
    for(i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            printf("%d ", i);
            sum += i;  // add factor
        }
    }

    printf("\nSum of factors (excluding %d) = %d\n", num, sum);

    if(sum == num) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}
