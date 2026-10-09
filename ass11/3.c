#include<stdio.h>
struct address{
    char city[20];
};
struct student {
    int id;
    char name[20];
    struct address add;
};

int main() {
    int i;
    struct student s1[3];

    for(i = 0; i < 3; i++) {
        printf("Enter id, name & city of student  %d:\n", i + 1);
        scanf("%d", &s1[i].id);
        scanf("%s", s1[i].name);
        scanf("%s", s1[i].add.city);
    }
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d details:\n", i + 1);
        printf("ID: %d\n", s1[i].id);
        printf("Name: %s\n", s1[i].name);
        printf("City: %s\n", s1[i].add.city);
    }
    return 0;
}