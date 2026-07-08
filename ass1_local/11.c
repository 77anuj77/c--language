#include <stdio.h>

int main() {
    int a;
    char name[20];
    int d1, d2, d3, d4, d5;
    float f;
    int g;

    printf("Enter Roll no.: \n");
    scanf("%d", &a);

    printf("Enter name: \n");
    scanf("%s", name);

    printf("---Enter marks--- \n");
    printf("\nEnter FAI marks: \n");
    scanf("%d", &d1);

    printf("Enter FQP marks: \n");
    scanf("%d", &d2);

    printf("Enter IKS marks: \n");
    scanf("%d", &d3);

    printf("Enter PPL marks: \n");
    scanf("%d", &d4);

    printf("Enter AIML marks: \n");
    scanf("%d", &d5);

    f = (d1 + d2 + d3 + d4 + d5) / 5.0;
    g= d1 + d2 + d3 + d4 + d5;
    
    printf("\nRoll: %d\nName: %s\nTotal Marks: %d\n", a, name, g);

    printf("The average of your marks is: %.2f\n", f);

    return 0;
}

