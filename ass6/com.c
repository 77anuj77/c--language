#include <stdio.h>
#include <string.h>
// ----------- WITHOUT BUILT-IN FUNCTIONS -----------
// Compare strings manually
int compareStrings(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return 0; // not equal
        i++;
    }
    return (s1[i] == '\0' && s2[i] == '\0');
}
// Find length manually
int stringLength(char s[]) {
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}
// Concatenate manually
void concatenateStrings(char s1[], char s2[], char result[]) {
    int i = 0, j = 0;

    while (s1[i] != '\0') {
        result[i] = s1[i];
        i++;
    }

    while (s2[j] != '\0') {
        result[i] = s2[j];
        i++;
        j++;
    }

    result[i] = '\0';
}
// Check palindrome manually using switch
void checkPalindrome(char str[]) {
    int j;
    int i, len = stringLength(str);
    int flag = 1;
    j=i-1;
    for (i = 0; i < j; i++) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    switch (flag) {
        case 1:
            printf("Palindrome\n");
            break;
        case 0:
            printf("Not Palindrome\n");
            break;
    }
}
// ----------- WITH BUILT-IN FUNCTIONS -----------
void builtInOperations(char s1[], char s2[]) {
    // Compare
    if (strcmp(s1, s2) == 0)
        printf("Built-in Compare: Strings are equal\n");
    else
        printf("Built-in Compare: Strings are not equal\n");

    // Length & longer string
    if (strlen(s1) > strlen(s2))
        printf("Built-in: First string is longer\n");
    else if (strlen(s1) < strlen(s2))
        printf("Built-in: Second string is longer\n");
    else
        printf("Built-in: Both strings are equal in length\n");

    // Concatenate
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s2);
    printf("Built-in Concatenation: %s\n", temp);
}
// ----------- MAIN FUNCTION -----------
int main() {
    char str1[100], str2[100], result[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Without built-in
    printf("\n--- Without Built-in Functions ---\n");

    if (compareStrings(str1, str2))
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    int len1 = stringLength(str1);
    int len2 = stringLength(str2);

    if (len1 > len2)
        printf("First string is longer\n");
    else if (len2 > len1)
        printf("Second string is longer\n");
    else
        printf("Both strings are equal in length\n");

    concatenateStrings(str1, str2, result);
    printf("Concatenated string: %s\n", result);

    printf("Palindrome check for first string: ");
    checkPalindrome(str1);

    // With built-in
    printf("\n--- With Built-in Functions ---\n");
    builtInOperations(str1, str2);

    return 0;
}