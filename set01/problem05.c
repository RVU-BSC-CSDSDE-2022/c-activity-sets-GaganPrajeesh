//Write a C program to compare three numbers using **pass by value**.

#include <stdio.h>

int input()
{
  int a;
  printf("Enter number \n");
    scanf("%d",&a);
  return a;
  }
int compare(int a, int b, int c)
{
  if (a>=b && a>=c)
{
  return a;
}
else if(a<=b && b>=c)
{
  return b;
}
  else
{
  return c;
}
  }

int main()
{
  int x,y,z,largest;
  x=input();
  y=input();
  z=input();
  largest= compare(x,y,z);
  printf("The largest number of %d,%d and %d is %d", x,y,z,largest);
  return 0;
}