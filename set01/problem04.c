//Write a C program to add two numbers using **pass by reference**.

#include <stdio.h>

void input(int*a,int*b)
{
  printf("eneter two numbers");
  scanf("%d%d",a,b);
}
void add(int a, int b, int *c)
{
  *c=a+b;
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  printf("%d+%d is %d\n",x,y,z);
  Return 0;
}