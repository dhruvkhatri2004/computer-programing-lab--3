#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // store original number

    printf("Digits are: ");
    while(temp != 0) {
        digit = temp % 10;       // get last digit
        printf("%d ", digit);    // print digit
        sum += digit;            // add digit to sum
        temp = temp / 10;        // remove last digit
    }

    printf("\nSum of digits of %d = %d\n", num, sum);

    return 0;
}
