//Write a program find whether a number is a composite number.

#include <stdio.h>

int input();
int is_composite(int n);
void output(int n, int result);

int input()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
}

int is_composite(int n)
{
  for (int i=3;i<n;i++)
    {
      if(n %i == 0)
        return 1;
    }
    return 0;
}

void output(int n, int is_composite)
{
  if(is_composite == 0)
  {
    printf("%d is not a composite number\n",n);
  }
  else 
  {
    printf("%d is a composite number\n",n);
  }
}

int main()
{
  int n,isc;
  n = input();
  isc = is_composite(n);
  output(n,isc);
  return 0;
}