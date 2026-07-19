#include <stdio.h>

int main() {
    char str[25], rev[25];
    int l = 0, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break; 
        }
        l++;
    }  

    j = l - 1; 
    for (i = 0; i < l; i++) {
        rev[j] = str[i];
        j--;
    }
    rev[l] = '\0';

    printf("Your string: %s", str);
    printf("\n|| The reversed string: %s", rev);

    return 0;
}