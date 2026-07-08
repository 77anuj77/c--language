#include<stdio.h>
int main(){
	int a,b,c1,c2,c3,c4;
	float c5;
	printf("Enter 2 values:");
	scanf("%d %d",&a, &b);
	c1=a+b;
	c2=a-b;
	c3=a/b;
	c4=a*b;
	c5=a/b;
	printf("addition: %d\n",c1);
	printf("substraction: %d\n",c2);
	printf("division: %d\n",c3);
	printf("multiplication: %d\n",c4);
	printf("mod division: %f\n",c5);
	return 0;
	
}
