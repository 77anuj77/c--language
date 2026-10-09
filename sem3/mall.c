#include <stdio.h>
#include <stdlib.h>  // malloc() and free()

int main() {
    int *ptr;
    int i, n, sum = 0;
    float avg;

    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("The required amount of memory is not available.\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    for (i = 0; i < n; i++) {
        sum = sum + *(ptr + i);
    }

    printf("The sum of the %d elements is ---> %d\n", n, sum);
    avg= sum/n;
    printf("The avg of the %d elements is --->%.2f",n, avg);
    free(ptr);

    return 0;
}