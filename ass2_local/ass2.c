#include<stdio.h>
int main(){
    int option, num, i, count;
    
    printf("Enter a number: ");
    scanf("%d", &num);  // Fixed input order
    
    printf("1. Even or Odd\n2. Prime or Composite\n");
    printf("Enter option: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            if(num % 2 == 0) {
                printf("%d is Even\n", num);
            } else {
                printf("%d is Odd\n", num);
            }
            break;

        case 2:
            if(num <= 1) {
                printf("Neither prime nor composite\n");
            } else {
                count = 0;  // Initialize!
                for(i = 2; i <= num/2; i++) {  // Optimized
                    if(num % i == 0) {
                        count++;
                        break;
                    }
                }
                if(count == 0) {
                    printf("%d is Prime\n", num);
                } else {
                    printf("%d is Composite\n", num);
                }
            }
            break;

        default:
            printf("Invalid option\n");
    }
    return 0;  // Moved outside switch
}

