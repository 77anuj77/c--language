#include <stdio.h>
int main(){
    int a, b;
    printf("Enter the two digits-->");
    scanf("%d, %d", &a,&b);
    printf("Sum of the given two numbers are--> ");
    int sum;
    sum= a+b;
    printf("%d", sum);
    return 0;
}