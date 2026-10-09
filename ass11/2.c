#include<stdio.h>

struct student {
    int id;
    char name[20];
    char city[10];
};

int main() {
    int i;
    struct student s1[3];

    for(i = 0; i < 3; i++) {
        printf("Enter id and name of student %d:\n", i + 1);
        scanf("%d", &s1[i].id);
        scanf("%s", s1[i].name);
    }
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d details:\n", i + 1);
        printf("ID: %d\n", s1[i].id);
        printf("Name: %s\n", s1[i].name);
    }
    return 0;
}