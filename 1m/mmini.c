#include <stdio.h>
#include <string.h>

#define MAX 100

// STRUCTURE
typedef struct { 
    int id; 
    char name[50]; 
    char author[50]; 
} Book;

// GLOBAL ARRAY AND COUNTER
Book lib[MAX];
int count = 0;

// HELPER FUNCTION
int find(int id) {
    for (int i = 0; i < count; i++)
        if (lib[i].id == id) return i;
    return -1;
}

// LOGIC FUNCTIONS
void add() {
    if (count >= MAX) { printf("Full!\n"); return; }
    
    printf("ID: "); scanf("%d", &lib[count].id);
    getchar(); // Clear newline
    
    printf("Title: "); fgets(lib[count].name, 50, stdin);
    lib[count].name[strcspn(lib[count].name, "\n")] = 0;
    
    printf("Author: "); fgets(lib[count].author, 50, stdin);
    lib[count].author[strcspn(lib[count].author, "\n")] = 0;
    
    count++;
}

void show() {
    if (count == 0) printf("Empty.\n");
    for (int i = 0; i < count; i++)
        printf("%d. ID:%d | %s | %s\n", i + 1, lib[i].id, lib[i].name, lib[i].author);
}

void search() {
    int id; printf("ID: "); scanf("%d", &id);
    int i = find(id);
    if (i == -1) printf("Not found.\n");
    else printf("Found: %s\n", lib[i].name);
}

void del() {
    int id; printf("ID to delete: "); scanf("%d", &id);
    int i = find(id);
    if (i == -1) { printf("Not found.\n"); return; }
    
    // Shift elements in the array
    for (; i < count - 1; i++) lib[i] = lib[i + 1];
    count--;
    printf("Deleted.\n");
}

int main() {
    int ch;
    do {
        printf("\n1.Add 2.Show 3.Search 4.Del 5.Exit: ");
        scanf("%d", &ch);
        
        switch (ch) {
            case 1: add();    break;
            case 2: show();   break;
            case 3: search(); break;
            case 4: del();    break;
        }
    } while (ch != 5);
    return 0;
}