#include <stdio.h>

int main() {
    int option;
    char cont;
    float x, y;

    do {
        printf("\n------------------- CALCULATOR -------------------\n");

        printf("Enter the value of x: ");
        scanf("%f", &x);

        printf("Enter the value of y: ");
        scanf("%f", &y);

        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Division");
        printf("\n4. Multiplication");
        printf("\nEnter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Addition: %.2f\n", x + y);
                break;

            case 2:
                printf("Subtraction: %.2f\n", x - y);
                break;

            case 3:
                if (y != 0)
                    printf("Division: %.2f\n", x / y);
                else
                    printf("Error: Division by zero!\n");
                break;

            case 4:
                printf("Multiplication: %.2f\n", x * y);
                break;

            default:
                printf("Invalid option! Please select 1–4.\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &cont);   // space before %c is important

    } while (cont == 'y' || cont == 'Y');

    return 0;
}