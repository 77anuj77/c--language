//for loop- accept 10 numbers & print print total and avg of two numbers
#include<stdio.h>
int main(){
    int n,num, i,total=0;
    float avg;
    printf("Enter the number of inputs you want to enter: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d",&num);
        total=total +num;
    }
    avg=total/2;
    printf("%d,%f",total,avg);
 
    return 0;
}