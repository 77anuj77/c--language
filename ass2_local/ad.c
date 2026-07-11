
#include<stdio.h>
int main(){
    int day;
    printf("Enter the day");
    scanf("%d",&day);
    switch(day)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("tuesday");
        break;
    
    case 3:
        printf("wednesday");
        break;

    case 4:
        printf("thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6 :
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;

    }
}