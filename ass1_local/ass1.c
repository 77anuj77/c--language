#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    int a, b, c, d;
    float r1, r2, r;
    char x[100];
    int choice1, i;

    printf("1. Quadratic Equation\n2. Conversion of Letter (upper <-> lower case)\n");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("--------------Quadratic Equation Solver----------------\n");
            printf("Enter a, b, c respectively:\n");
            scanf("%d %d %d", &a, &b, &c);

            d = b * b - 4 * a * c;

            if (d > 0) {
                printf("------------Two distinct roots exist-----------\n");
                r1 = (-b + sqrt(d)) / (2.0 * a);
                r2 = (-b - sqrt(d)) / (2.0 * a);
                printf("R1 = %.2f, R2 = %.2f\n", r1, r2);
            }
            else if (d == 0) {
                printf("------------Two equal roots exist-----------\n");
                r = -b / (2.0 * a);
                printf("R1 = R2 = %.2f\n", r);
            }
            else {
                printf("--------No real roots exist--------\n");
            }
            break;

        case 2:
            printf("------------ Conversion of Letters--------------\n");
            printf("Enter a word:\n");
            scanf("%s", x);

            printf("1. Lower -> Upper\n2. Upper -> Lower\n");
            scanf("%s]", &choice1);

            switch (choice1) {

                case 1:
                    for (i = 0; x[i] != '\0'; i++) {
                        if (x[i] >= 'a' && x[i] <= 'z') {
                            x[i] = x[i] - 32;
                        }
                    }
                    printf("Upper-case: %s\n", x);
                    break;

                case 2:
                    for (i = 0; x[i] != '\0'; i++) {
                        if (x[i] >= 'A' && x[i] <= 'Z') {
                            x[i] = x[i] + 32;
                        }
                    }
                    printf("Lower-case: %s\n", x);
                    break;

                default:
                    printf("Invalid command chosen\n");
            }
            break;

        default:
            printf("---------Invalid choice------------\n");
    }

    return 0;
}