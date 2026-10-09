#include <stdio.h>

// Function to swap two integers using call by value
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_by_value function:\n");
    printf("   Value of a: %d\n", a);
    printf("   Value of b: %d\n", b);
}

// Function to swap two integers using call by reference
void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap_by_reference function:\n");
    printf("   Value of *a: %d\n", *a);
    printf("   Value of *b: %d\n", *b);
}

int main() {
    int x = 10, y = 20;

    printf("Original values in main():\n");
    printf("   x: %d\n", x);
    printf("   y: %d\n", y);

    // Demonstrating call by value
    printf("\nCalling swap_by_value(x, y):\n");
    swap_by_value(x, y);
    printf("Values in main() after swap_by_value:\n");
    printf("   x: %d\n", x);
    printf("   y: %d\n", y);

    // Reset values for call by reference demonstration
    x = 10;
    y = 20;
    printf("\nResetting values in main():\n");
    printf("   x: %d\n", x);
    printf("   y: %d\n", y);

    // Demonstrating call by reference
    printf("\nCalling swap_by_reference(&x, &y):\n");
    swap_by_reference(&x, &y);
    printf("Values in main() after swap_by_reference:\n");
    printf("   x: %d\n", x);
    printf("   y: %d\n", y);

    return 0;
}