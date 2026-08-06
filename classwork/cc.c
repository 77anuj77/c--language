#include <stdio.h>

int main() {
    int num, digit = 0;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive number.");
    } 
    else if (num == 0) {
        digit = 1;   // special case
        printf("Number of digits = %d", digit);
    }
    else {
        while (num > 0) {
            num = num / 10;
            digit++;
        }
        printf("Number of digits = %d", digit);
    }

    return 0;
}