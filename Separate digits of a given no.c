#include <stdio.h>

int main() {
    int num, temp, digit, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // find number of digits
    int count = 0;
    for(int n = temp; n > 0; n /= 10) {
        count++;
    }

    // extract and reverse digits using for loop
    for(int i = 0; i < count; i++) {
        digit = temp % 10;       // get last digit
        reversed = reversed * 10 + digit;  // build reversed number
        temp = temp / 10;        // remove last digit
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
