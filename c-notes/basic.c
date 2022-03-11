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


//use l to long variable  (when compiler complane about "long unsigned <var type>")
//ex:- ld / lc

//************************************************************


// we can use const for permanent value 
const int varconst = 72;

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


// ++ 
int opeval = 5;
printf("opeval++ =  %ld\n", opeval++);  //5
printf("opeval++ =  %ld\n", ++opeval);  //7

// if a = 5, b = 5, c = 10;
// a == b       True = 1
// a > c        False = 0           
// a < b        False = 0
// a != c       True = 1
// a >= b       True = 1
// a <= c       True = 1


/* Bitwise Operators

if a = 4, b = 5;

&  ==> bitwise AND   { 

a&b =
     00000100
     00000101
     00000100 = 4   }

    
 |  ==> bitwise OR {

a|b =
     00000100
     00000101
     00000101 = 5   }

    
// ^  ==> bitwise XOR {

a^b =
     00000100
     00000101
     00000001 = 1   }


// >> ==> bit shift right {

a>>1 =
     00000100 <~
     |_________|
     00001000  = 8
}

// << ==> bit shift left{

a>>1 =
      ~> 00000100 
     |__________|
         00000010  = 2
}
}
// ~  ==> bitwise NOT

~b = -(5 + 1)

*/
int a = 4, b = 5;
//condition ? True Statement : Flase statment
  a == b    ? printf("True") : printf("F");


//****************************
// After the import Library you need to use -lm
// gcc code.c -o code -lm
//**************************************  

}