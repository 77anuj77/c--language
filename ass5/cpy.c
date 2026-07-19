#include <stdio.h>

int main() {
    char str[25], cpy[25];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        
        cpy[i] = str[i];
    }

    cpy[i] = '\0';
    printf("Your string: %s", str);
    printf("     ||       The copied string is: %s", cpy);

    return 0;
}
