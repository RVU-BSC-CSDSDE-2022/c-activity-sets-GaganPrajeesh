// Write a program to find nth number in Fibonacci sequence.

#include<stdio.h>

int input()
{ 
  int n ;
  printf("Enter n: ");
  scanf("%d",&n); 
  return n;
}

int find_fibo(int n)
{
  int n1,n2,fibo,i;
  n1=0;n2=1,fibo=2;
  for (i=2;i<=n;i++) 
  {
    fibo=n1+n2;
    n1=n2;
    n2=fibo;
  }
  return fibo;
}

void output(int n,int fibo)
{
printf("F(%d) is %d\n",n,fibo);
}

int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}