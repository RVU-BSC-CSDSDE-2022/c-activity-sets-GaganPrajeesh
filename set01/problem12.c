//Write a C program to find the sum of n complex numbers.

#include <stdio.h>

struct_Complex
{
float real;
float imaginary;
};

typedef struct_Complex Complex;
int enter_n_complex()
{
int n;
printf(“Enter the number of a complex numbers:\n");
scanf(“%d",&n);
return n;
}

Complex input_complex()
{
Complex c;
printf(“Enter the real and imaginary parts of a complex number:\n");
scanf(“%f%f”, &c.real, &c.imaginary);
return c;
}

void input_n_complex(int n, Complex c[n])
{
for (i=0;i<n;i++)
c[i]= input_complex();
}

Complex add(Complex a, Complex b)
{
Complex c;
c.real= a.real + b.real;
c.imaginary= a.imaginary + b.imaginary;
return c;
}

Complex add_n_complex(int n, Complex c[n])
{
Complex sum=(0,0)
for (i=0;i<n;i++)
sum = sum + c[i];
return sum;

void output(int i,Complex c[n], Complex sum)
{
int i;
for (i=0, i< n-1, i++)
{
printf(“(%f + i%f) + \n”, c.real, c.imaginary;
printf(“(%f + i%f)= \n”, c[n-1].real, c[n-1].imaginary;
printf(“(%f + i%f)\n” (sum.real, sum.imaginary);
}

int main()
{
int n= int enter_n_complex;
Complex c[n];
input_n_complex(int n, Complex c[n];
Complex sum = add_n_complex(int n, Complex c[n]);
output(n,&c[n],sum);
return 0;
}