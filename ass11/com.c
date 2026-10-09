#include <stdio.h>

// Define first structure (Address)
struct Address {
    char city[20];
    int pincode;
};

// Define second structure (Student) with nested structure
struct Student {
    int id;
    char name[20];
    struct Address addr;  // Nested structure
};

int main() {
    // Initialize structure
    struct Student s1 = {1, "Rahul", {"Pune", 411001}};

    // Access structure members
    printf("Single Structure:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("City: %s\n", s1.addr.city);
    printf("Pincode: %d\n", s1.addr.pincode);

    // Array of structures
    struct Student s[2] = {
        {2, "Amit", {"Mumbai", 400001}},
        {3, "Sneha", {"Delhi", 110001}}
    };

    printf("\nArray of Structures:\n");
    for(int i = 0; i < 2; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("City: %s\n", s[i].addr.city);
        printf("Pincode: %d\n", s[i].addr.pincode);
    }

    return 0;
} 