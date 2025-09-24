//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q9. WAP to divide two numbers and use type casting operation (e.g. mean =
//	(double)sum/n;).

#include<stdio.h>

int main(){
	int rollno=1025030452;
	float a,b;
	printf("enter the dividend : ");
	scanf("%f",&a);
	printf("enter the divisor : ");
	scanf("%f",&b);
	 int d=(int)a/b;
	 printf("value with type cast : %d \n", d);
	 printf("value without type cast : %f", a/b);
	return 0;
}
