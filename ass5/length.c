#include <stdio.h>

int main() {
    char str[25];
    int length = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop until the null character is reached
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            break; 
        }
        length++;
    }

    printf("Length of the string is: %d", length);

    return 0;
}