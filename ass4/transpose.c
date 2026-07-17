//matrix tranpose and inverse operation using switch
#include <stdio.h>

int main() {
    int i, j, r, c, n;

    printf("Enter the no. of ROWS: ");
    scanf("%d", &r);

    printf("Enter the no. of COLS: ");
    scanf("%d", &c);

    int A[r][c];   // declare AFTER input

    printf("Enter the elements for Matrix A:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n==== Matrix A ====\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nChoose Operation:\n");
    printf("1. Transpose\n2. Inverse (only 2x2 matrix)\n");
    scanf("%d", &n);

    switch(n) {

        case 1:
            printf("\nTranspose of matrix:\n");
            for(i = 0; i < c; i++) {
                for(j = 0; j < r; j++) {
                    printf("%d ", A[j][i]);
                }
                printf("\n");
            }
            break;

        case 2:
            if(r == 2 && c == 2) {
                float det;
                det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

                if(det == 0) {
                    printf("Inverse not possible (determinant = 0)\n");
                } 
                else {
                    printf("\nInverse of matrix:\n");

                    printf("%f %f\n",
                           A[1][1] / det, -A[0][1] / det);

                    printf("%f %f\n",
                           -A[1][0] / det, A[0][0] / det);
                }
            } else {
                printf("Inverse only supported for 2x2 matrix!\n");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}