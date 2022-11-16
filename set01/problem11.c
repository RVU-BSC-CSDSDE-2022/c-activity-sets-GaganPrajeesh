//Write a C program to find the sum of 2 complex numbers.

#include <stdio.h>

struct complex
{
float real;
float imaginary;
};

typedef struct complex Complex;
Complex input()
Complex a;
printf("Enter the real and imaginary parts of a complex number: \n");
scanf("%f%f,&a.real,&a.imaginary");
return a;
}

Complex add(Complex a,Complex b)
{
  Complex c;
  c.real= a.real+b.real;
  c.imaginary= a.imaginary+b.imaginary;
  return c;
}

void output(Complex a,Complex b,Complex c)
{
printf("The sum of %f+i%f and %f+i%f is %f+i%f",a.real, a.imaginary, b.real, b.imaginary, c.real, c.imaginary)
}

int main()
{
  Complex a,b,c;
  a=input();
  b=input();
  c=add(a,b);
  output(a,b,c);
  return 0;
}