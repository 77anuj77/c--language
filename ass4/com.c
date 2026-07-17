#include <stdio.h>
int main() {
    int r, c, i, j, choice;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);
    int A[r][c], B[r][c], result[r][c];
    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    // Menu
    printf("\nChoose Operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Transpose (Matrix A)\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("\nAddition Result:\n");
            for(i = 0; i < r; i++) {
                for(j = 0; j < c; j++) {
                    result[i][j] = A[i][j] + B[i][j];
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("\nSubtraction Result:\n");
            for(i = 0; i < r; i++) {
                for(j = 0; j < c; j++) {
                    result[i][j] = A[i][j] - B[i][j];
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            printf("\nTranspose of Matrix A:\n");
            for(i = 0; i < c; i++) {
                for(j = 0; j < r; j++) {
                    printf("%d ", A[j][i]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}