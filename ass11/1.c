#include<stdio.h>
struct student{
    int id;
    char name[20];
    char city[10];
};
int main(){
    int i;
    struct student s1={23, "Anuj"};
    struct student s2={24, "Anaadi"};
    
    printf("id & name of sdudent s1\n");
    printf("%s\n", s1.name);
    printf("%d", s1.id);
    printf("\nid & name of sdudent s2\n");
    printf("%s\n", s2.name);
    printf("%d", s2.id);
}
