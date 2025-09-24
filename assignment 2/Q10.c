//NAME= JIVESH KUMAR
//GROUP= 1A82
//ROLL NUMBER= 1025030452

//Q10. String is set of characters (one next to each other stored in the memory and
//	 not related to each other), e.g. =&quot;abc123&quot;. WAP to practice type casting using the
//	 following functions. You can initialize a string using statement char *s=&quot;3.145&quot;
//	 Then s is a string.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* codes f=string to float
         i=string to int
         l=string to long
         a=int to string
         o=long to string */

int main() {
    int rollno = 1025030452;
    int u;
    char a, str[100];
    long r;

    printf("Enter the code for conversion (f/i/l/a/o): ");
    scanf(" %c", &a);  // Space before %c to consume newline

    switch (a) {
        case 'f': {
            printf("Enter the string value: ");
            scanf("%s", str);
            float fl = atof(str);
            printf("The float conversion is: %f\n", fl);
            printf("The original value was: %s\n", str);
            break;
        }
        case 'i': {
            printf("Enter the string value: ");
            scanf("%s", str);
            int in = atoi(str);
            printf("The int conversion is: %d\n", in);
            printf("The original value was: %s\n", str);
            break;
        }
        case 'l': {
            printf("Enter the string value: ");
            scanf("%s", str);
            long lo = atol(str);
            printf("The long conversion is: %ld\n", lo);
            printf("The original value was: %s\n", str);
            break;
        }
        case 'a': {
            printf("Enter the int value: ");
            scanf("%d", &u);
            char arr[100];
            sprintf(arr, "%d", u);
            printf("The string conversion is: %s\n", arr);
            printf("The original value was: %d\n", u);
            break;
        }
        case 'o': {
            printf("Enter the long value: ");
            scanf("%ld", &r);
            char arr[100];
            sprintf(arr, "%ld", r);
            printf("The string conversion is: %s\n", arr);
            printf("The original value was: %ld\n", r);
            break;
        }
        default:
            printf("Invalid code entered.\n");
    }

    return 0;
}


