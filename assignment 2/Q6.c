//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q6. WAP to shift left and shift right operators (&gt;&gt; and &lt;&lt;). Ask the application of
//	this operator to your lab instructor.

#include<stdio.h>

int main(){
	int rollno=1025030452;
	int a;
	printf("enter the number : ");
	scanf("%d",&a);
	printf("left shift result : %d \n",(a<<1));
	printf("right shift result : %d",(a>>1));
	return 0;
}
