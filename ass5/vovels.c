#include <stdio.h>

int main() {
    char str[25];
    int ch = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            break;
        }
        if (str[i] == 'A' || str[i] == 'I' || str[i] == 'E' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'i' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u') {
            ch++;
        }
    }

    printf("Total number of vowels in the string is: %d", ch);
        
    return 0;
}