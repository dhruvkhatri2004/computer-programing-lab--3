#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;   // to handle large results

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for(i = n; i >= 1; i--) {
            fact = fact * i;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }

    return 0;
}
