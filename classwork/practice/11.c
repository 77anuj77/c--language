#include<stdio.h>
struct student{
    int id;
    int name;
}s1, *ptr;
void swap(struct student s1, struct student s2){
    struct student temp = s1;
    s1=s2;
    s2=temp;
}
int main(){
    ptr=&s1;
    ptr->id=100;
    ptr->name=200;
    printf("%d", ptr->id);
    return 0;
}