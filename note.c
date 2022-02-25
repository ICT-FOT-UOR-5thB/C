#include <stdio.h>
void main()
{

printf("Hello\nWorld!"); 
// \n (newline)
// \t (tab)
// \v (vertical tab)
// \b (backspace)
// \r (carriage return)
// \” (double quotes)
// \’ (single quotes)


//************************************************************

// Integer (signed)         %d
// Integer (unsigned)       %u
// char                     %c
// Array of char            %s
// float / double           %f
// long float               %lf
// Pointer value(address)   %p

//************************************************************


int a = 72;
char b = 'A';
float c= 13.8;
float d= 10.1234567;
int e = a/10;

printf("a equals: %d \n", a); // Integer (signed) %d  

printf("char value of a: %c \n", a); // char %c ------or-------- // Array of char %s
printf("integer value of b: %d \n", b); // Integer (unsigned) %u

printf("b equals: %c \n", b);

printf("c equals: %f \n", c); // float / double %f   ------or----- // long float %lf

printf("\n sizeof(a)= %d bytes",sizeof(a));
printf("\n sizeof(b)= %d bytes",sizeof(b));

printf("\n Adress of a=%p",&a);  // Pointer value(address) %p
printf("\n d variable store:%7.3f \n", d);

printf("the value of e = %d \n",e);   // it rounded the number   72/10 = 7. => 7


//*********************Data Input *********************//

//  Method => scanf(“Format Specifier”, &Variable);
int marks;
printf("Enter marks \n");
scanf ("%d", &marks);

}