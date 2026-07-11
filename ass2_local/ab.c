#include<stdio.h>
int main(){
    int num,i, flag=0;
    printf("Enter a num:");
    scanf("%d",&num);
    
    if (num<=1){
        printf("The number is neither prime or composite");
    }
    // we can use the num/2 for saving time
    else{
        for(i=2; i<num; i++){
            if(num%i==0){
                flag=1;
                break;  
            }
        if(flag==0){
            printf("Prime Number");
            break;
        }
        else{
            printf("Composite Number");
            break;
        }
        }
    }
    return 0;
}