#include <stdio.h>

int main() {
    char str[25], cpy[25], rev[25];
    int choice, i, j, length, vowels;

    while (1) {
        // Displaying the Menu
        printf("\n\n--- String Operations Menu ---");
        printf("\n1. Calculate Length [length.c]");
        printf("\n2. Copy String [cpy.c]");
        printf("\n3. Reverse String [rev.c]");
        printf("\n4. Count Vowels [vovels.c]");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        
        // Reading choice and clearing the buffer
        if (scanf("%d", &choice) != 1) break;
        getchar(); // Consumes the '\n' left by scanf so fgets works correctly

        if (choice == 5) {
            printf("Exiting program...\n");
            break;
        }

        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);

        // Pre-processing: Calculate length and remove '\n'
        length = 0;
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == '\n') {
                str[i] = '\0';
                break;
            }
            length++;
        }

        switch (choice) {
            case 1: // Logic from length.c
                printf("Length of the string is: %d", length);
                break;

            case 2: // Logic from cpy.c
                for (i = 0; str[i] != '\0'; i++) {
                    cpy[i] = str[i];
                }
                cpy[i] = '\0';
                printf("Original: %s || Copied: %s", str, cpy);
                break;

            case 3: // Logic from rev.c
                j = length - 1;
                for (i = 0; i < length; i++) {
                    rev[j] = str[i];
                    j--;
                }
                rev[length] = '\0';
                printf("Original: %s || Reversed: %s", str, rev);
                break;

            case 4: // Logic from vovels.c
                vowels = 0;
                for (i = 0; str[i] != '\0'; i++) {
                    if (str[i] == 'A' || str[i] == 'I' || str[i] == 'E' || str[i] == 'O' || str[i] == 'U' ||
                        str[i] == 'a' || str[i] == 'i' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u') {
                        vowels++;
                    }
                }
                printf("Total number of vowels in the string is: %d", vowels);
                break;

            default:
                printf("Invalid choice! Please select 1-5.");
        }
    }

    return 0;
}