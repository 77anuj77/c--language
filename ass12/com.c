#include <stdio.h>
#include <string.h>

// Define structure
struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b[100];
    int n, i, searchId, found = 0;

    // Input
    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &b[i].id);

        printf("Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Author: ");
        scanf(" %[^\n]", b[i].author);

        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    // Display
    printf("\nBook Details:\n");
    for(i = 0; i < n; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("ID: %d\n", b[i].id);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Price: %.2f\n", b[i].price);
    }

    // Search by ID
    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchId);

    for(i = 0; i < n; i++) {
        if(b[i].id == searchId) {
            printf("\nBook Found:\n");
            printf("ID: %d\n", b[i].id);
            printf("Title: %s\n", b[i].title);
            printf("Author: %s\n", b[i].author);
            printf("Price: %.2f\n", b[i].price);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Book not found!\n");
    }

    return 0;
}