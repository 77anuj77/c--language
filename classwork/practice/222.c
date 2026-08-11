#include<stdio.h>
int main(){
    int i=0;
    char s1="Anuj";
    char s2="Anuj";
    while(s1[i]!="\0"||s2[i]!="\0"){
        if(s1[i]!=s2[i]){
            break;
        }
        i++
    }
    if(s1[i]=="\0"&&s2[i]=="\0"){
        printf("Equal");
    }
    else return "Not Equal";
}


#include<stdio.h>
int main(){
    int i=0;
    char s1="Anuj";
    char s2="Anuj";
    while(s1[i]!='\0'){
        s2[i]=s2[i];
        i++
    }
    s2[i]='\0'
}


#include<stdio.h>
int main(){
    int i=0,j;
    char s1[]="Anuj";
    char s2[]="Paroha";
    while(s1[i]=='\0'){
        i++;
    }
    j=0;
    while(s2[j]!='\0'&&s2[j]!='\n'){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    printf("%s", s1);
}


#include<stdio.h>
int main(){
    int i=0,j;
    char temp[20];
    char s1[20]="Anuj";
    char s2[]="Paroha";
    while(s1[i]=='\0'){
        i++;
    }

    j=i-1;
    while(j>i){
        temp[i]=s1[j];
        s1[j]=s1[i];
        s1[i]=temp[j];
        i++;
        j--;
    }
    s1[i]='\0';
    printf("%s", s1);
}