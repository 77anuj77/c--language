//write a program to display the multiplication of the two matrix
//write a program to check if a matrix is an identity matrix display the reasult
#include <stdio.h>

int main() {
    int i, j, r, c;
 
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int A[r][c];

    // Input matrix
    printf("Enter elements of matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check Identity Matrix
    int isIdentity = 1;

    if(r != c) {
        isIdentity = 0;
    } else {
        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                if(i == j && A[i][j] != 1) {
                    isIdentity = 0;
                    break;
                }
                if(i != j && A[i][j] != 0) {
                    isIdentity = 0;
                    break;
                }
            }
        }
    }

    // Result
    if(isIdentity == 1) {
        printf("The matrix is an Identity Matrix.\n");
    } else {
        printf("The matrix is NOT an Identity Matrix.\n");
    }

    return 0;
}