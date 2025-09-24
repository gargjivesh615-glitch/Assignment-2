//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q2. WAP to find roots of a quadratic equation (for D>=0 case).

#include<stdio.h>
#include<math.h>

int main(){
	int rollno=1025030452;
	float a,b,c,d;
	printf("enter the coefficient of x^2 : ");
	scanf("%f",&a);
	printf("enter the coefficient of x : ");
	scanf("%f",&b);
	printf("enter the constant value : ");
	scanf("%f",&c);
	d=(b*b)-4*a*c;
	if(d>=0){
		printf(" first root is : %f",(-b-pow(d,0.5))/(2*a));
		printf(" second root is : %f",(-b+pow(d,0.5))/(2*a));	
	}
	else{
		printf("discriminant is less than 0");
	}
	return 0;
}
