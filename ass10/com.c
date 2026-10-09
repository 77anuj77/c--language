#include <stdio.h>

// extern variable
int extVar = 100;

// Recursive function to find sum of digits
int sumDigits(int n) {
    if(n == 0)
        return 0;
    else
        return (n % 10) + sumDigits(n / 10);
}

// Function to demonstrate storage classes
void storageDemo() {
    auto int a = 10;        // auto (default local variable)
    static int s = 0;       // static variable
    register int r = 5;     // register variable

    s++; // retains value between function calls

    printf("\nInside storageDemo():\n");
    printf("auto variable a = %d\n", a);
    printf("static variable s = %d\n", s);
    printf("register variable r = %d\n", r);
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = sumDigits(num);
    printf("Sum of digits = %d\n", result);

    // Demonstrating storage classes
    storageDemo();
    storageDemo();
    storageDemo();

    // extern variable usage
    printf("\nExtern variable extVar = %d\n", extVar);

    return 0;
}