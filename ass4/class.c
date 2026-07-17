//write a c program to perform matix operations like addition, multiplication, subtraction
#include <stdio.h>

int main() {
    int r, c, i, j, k, n;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int A[r][c], B[r][c], sum[r][c], sub[r][c], mul[r][c];

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
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("\nAddition Result:\n");
            for(i = 0; i < r; i++) {
                for(j = 0; j < c; j++) {
                    sum[i][j] = A[i][j] + B[i][j];
                    printf("%d ", sum[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("\nSubtraction Result:\n");
            for(i = 0; i < r; i++) {
                for(j = 0; j < c; j++) {
                    sub[i][j] = A[i][j] - B[i][j];
                    printf("%d ", sub[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("\nMultiplication Result:\n");
            for(i = 0; i < r; i++) {
                for(j = 0; j < c; j++) {
                    mul[i][j] = 0;
                    for(k = 0; k < c; k++) {
                        mul[i][j] += A[i][k] * B[k][j];
                    }
                    printf("%d ", mul[i][j]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}

