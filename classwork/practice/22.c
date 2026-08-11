#include<stdio.h>
int main(){
   int arr[3][3], brr[3][3];
   int i,j,k, c[3][3];
   for(i=0; i<3; i++){
    for (j=0; j<3; j++){
        scanf("%d", &arr[i][j]);
        }
   }
   for(i=0; i<3; i++){
    for (j=0; j<3; j++){
        printf("%d", arr[i][j]);
        }
   }  
   for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            c[1][j]=0;
            for (k=0;k<3;k++){
                c[i][j]+=arr[i][k]+brr[k][j];
            }
        }
   }
      for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d", c[i][j]);
        }
   }
}