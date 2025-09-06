#include <stdio.h>

int main() {
    int num, temp, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // store original number

    while(temp != 0) {
        digit = temp % 10;           // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        temp = temp / 10;            // remove last digit
    }

    printf("Reversed number of %d = %d\n", num, reversed);

    return 0;
}
