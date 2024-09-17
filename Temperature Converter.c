#include <stdio.h>
/* format specifiers
address: %p, %x, %u

%lu is for runsigned long int
%d is for int
%f is for float
%lf is for double
%c is for char
= is called assignment operator
it copies the right side's data to the box of the left side

*/

/*
scanf("format specifier(s)", address of the varibies...);

*/




int main(void){
float  fahrenheit;
float celsius;
  printf("Enter the temperature in fahrenheight: ");
  scanf("%f", &fahrenheit);

  celsius = (5.0/9.0)*(fahrenheit - 32);
  printf("The Celsius equivalent is: %f", celsius);



  return 0;
}
