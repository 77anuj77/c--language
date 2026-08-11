#include<stdio.h>
int main(){
    int arr[4];
    int i;
    int large=arr[0], small=arr[0];
    for(int i=0;i<4; i++){
        scanf("%d", arr[i]);
    }
    for (i=0; i<4;i++){
        if(large<arr[i]){
            large=arr[i];
        }
        else if(small>arr[0]){
            small=arr[i];
        }
    }
}