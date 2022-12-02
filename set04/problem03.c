// Write a program to check if the given number is prime.

#include <stdio.h>

int input_number()
{
  int n;
  printf("Enter an integer:\n");
  scanf("%d",&n);
  return n;
}

int is_prime(int n)
{
  int i,c=0;
  for(i=1;i<=n;i++) 
  {
    if(n%i==0) 
        c++;
  }
  return c;    
}

void output(int n, int result)
{
  if (result==2)
    printf("%d is a Prime number\n",n);
  else
    printf("%d is not a Prime number\n",n);
}

int main()
{
  int n, result;
  n=input_number();
  result=is_prime(n);
  output(n,result);
}