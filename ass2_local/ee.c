//write a program to print all prime numbers between 1 to 50
#include <stdio.h>

int main() {
    int i, j, count;

    for (i = 2; i <= 50; i++) {
        count = 0;        // reset for each number

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) { // prime condition
            printf("%d ", i);
        }
    }

    return 0;
}