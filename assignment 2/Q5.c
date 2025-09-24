//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q5. Assignment operator assigns right hand side value to left hand side variable.
//	Use this idea to interchange (swap) values of two variables. (Hint: You may need a
//	third variable. Think like switching coffee and tea between two cups using a third cup)

#include<stdio.h>

int main(){
	int rollno=1025030452;
	int a,b,c;
	printf("enter number 1 : ");
	scanf("%d",&a);
	
	printf("enter number 2 :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("the number 1 : %d \n", a);
	printf("the number 2 : %d \n", b);
	return 0;
}
