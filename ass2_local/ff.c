// write a program to add odd and even numbers in a given range
#include<stdio.h>
int main(){
    int i,x,add_eve=0,add_odd=0;
    printf("Enter the range:");
    scanf("%d",&x);
    for (i=1;i<=x;i++){
        if(i%2==0){
            add_eve=add_eve+i;
        }
        else{
            add_odd=add_odd+i;
        }
    }
    printf("%d,%d",add_eve,add_odd);
    return 0;
}