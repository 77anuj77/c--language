#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

void addBook() {
    FILE *fp = fopen("books.txt", "a");
    struct Book b;

    printf("Enter ID: ");
    scanf("%d", &b.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", b.name);
    printf("Enter Author: ");
    scanf(" %[^\n]", b.author);

    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);

    printf("Book Added Successfully!\n");
}

void displayBooks() {
    FILE *fp = fopen("books.txt", "r");
    struct Book b;

    while(fread(&b, sizeof(b), 1, fp)) {
        printf("\nID: %d\nName: %s\nAuthor: %s\n", b.id, b.name, b.author);
    }
    fclose(fp);
}

void searchBook() {
    FILE *fp = fopen("books.txt", "r");
    struct Book b;
    int id, found = 0;

    printf("Enter ID to search: ");
    scanf("%d", &id);

    while(fread(&b, sizeof(b), 1, fp)) {
        if(b.id == id) {
            printf("\nBook Found:\nID: %d\nName: %s\nAuthor: %s\n", b.id, b.name, b.author);
            found = 1;
        }
    }

    if(!found)
        printf("Book not found!\n");

    fclose(fp);
}

int main() {
    int choice;

    do {
        printf("\n1. Add Book\n2. Display Books\n3. Search Book\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}
