#include <stdio.h>
#include <math.h>

int main() {
    int choice, n, i;
    int t1 = 0, t2 = 1, nextTerm;
    double num, result;

    printf("Menu:\n");
    printf("1. Generate Fibonacci Series\n");
    printf("2. Find Square Root\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter the number of terms: ");
            scanf("%d", &n);

            printf("Fibonacci Series: ");
            for(i = 1; i <= n; i++) {
                printf("%d ", t1);
                nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;
            }
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%lf", &num);

            if(num < 0) {
                printf("Square root of a negative number is not possible.\n");
            } else {
                result = sqrt(num);
                printf("Square root = %.2lf\n", result);
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}