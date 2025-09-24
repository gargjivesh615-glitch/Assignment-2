//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q1. WAP to practice math functions such as sin(), cos(), log(), pow(), sqrt() etc. by
//	including &lt;math.h&gt; header file.

#include<stdio.h>
#include<math.h>

int main(){
	int rollno=1025030452;
	char c;
	float a,b;
    printf("enter the operator : ");
    scanf("%c",&c);
    
    switch(c){
    	case's':
    	   printf("enter the angle in degree : ");
    	   scanf("%f",& a);
    	   printf("the value is : %f",sin((a*3.14)/180));
    	   break;
    	case'c':
    	   printf("enter the angle in degree : ");
    	   scanf("%f",& a);
    	   printf("the value is : %f",cos((a*3.14)/180));
    	   break;
    	case'l':
    	   printf("enter the number  : ");
    	   scanf("%f",& a);
    	   printf("the value is : %f",log(a));
    	   break;
    	case'p':
    	   printf("enter the number : ");
    	   scanf("%f",& a);
    	   printf("enter the power : ");
    	   scanf("%f",& b);
    	   printf("the value is : %f",pow(a,b));
    	   break; 
    	case'r':
    	   printf("enter the value : ");
    	   scanf("%f",& a);
    	   printf("the value is : %f",sqrt(a));
    	   break;
    	default :
    		printf("error");
    	break;
	}
	return 0;
}
