// print the size of the data type
#include <stdio.h>
#include <string.h>

int main() {
    int a = 77, arr[5] = {1, 2, 3, 4, 5};
    float b = 9.8;
    char c = 'a';

    printf("The size of int, float, char, and array of 5 is ---> ");
    printf("%zu, %zu, %zu, %zu\n", sizeof(a), sizeof(b), sizeof(c), sizeof(arr));

    return 0;
}