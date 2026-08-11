#include<stdio.h>
struct student{
    int id;
    int name;
}s1, *ptr;
int main(){
    ptr=&s1;
    ptr->id=100;
    ptr->name=200;
    printf("%d", ptr->id);
    return 0;
}