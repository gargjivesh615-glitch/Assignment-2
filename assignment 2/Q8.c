//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q8. WAP using sizeof() function to find size of char, integer, long int, float and
//	double

#include<stdio.h>

int main(){
	int rollno=1025030452;
	printf("size of int : %zu \n", sizeof(int));
	printf("size of char : %zu \n", sizeof(char));
	printf("size of long int: %zu \n", sizeof(long int));
	printf("size of float : %zu \n", sizeof(float));
	printf("size of double : %zu", sizeof(double));
	
	return 0;
}
