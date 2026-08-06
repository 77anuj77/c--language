//#create and arr of 5 ask user to enter the 5 elemest 
#include<stdio.h>
int main(){
    int arr[5], i;
    printf("Enter the 5 elements-->");
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    int sum=0;
    printf("The sum of these 5 elements is-->");
    for(i=0; i<5; i++){
        sum=sum + arr[i];
    }
    printf("%d", sum);
}