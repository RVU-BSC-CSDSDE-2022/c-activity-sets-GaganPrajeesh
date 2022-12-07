// Write a program to find the smallest of three fractions.

#include<stdio.h>

typedef struct {
    int num, den;
} Fraction;


int input()
{
  Fraction f;
  for(int i=0;i<3;i++)
    {
      printf("Enter numerator of %d fraction: ",i+1);
      scanf("%d",&f[i].num);
      printf("Enter denominator of %d fraction: ",i+1);
      scanf("%d",&f[i].den);
    }
}

int lcm(int a,int b)
{
  int temp = a;
  while(1)
    {
      if(temp % b == 0 && temp % a == 0)
      break;
      temp++;
    }
  return temp;
}

int find_lcm()
{
  int l,k;
  if(f[0].den<f[1].den)
  l = lcm(f[0].den,f[1].den);
  else
  l = lcm(f[1].den,f[0].den);

  if(l>f[2].den)
  k= lcm(l,f[2].den);
  else
  k= lcm(f[2].den,l);
  printf("The lcm of three integers is %d",k);
}

int temp()
{
  int temp1,temp2,temp3;
  temp1=(f[0].num/f[0].den)*k;
  temp2=(f[1].num/f[1].den)*k;
  temp3=(f[2].num/f[2].den)*k;

  Fraction tempstruct;
  tempstruct.num=f[0].num;
  tempstruct.den=f[0].den;
  if (temp2<temp1)
  {
    tempstruct.num=f[1].num;
    tempstruct.den=f[1].den;
  }

  if (temp3<temp1)
  {
    tempstruct.num=f[2].num;
    tempstruct.den=f[2].den;
  }
  printf("%d/%d",tempstruct.num,tempstruct.den);
}

int output()
{
  printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d",f[0].num,f[0].den,f[1].num,f[1].den,f[2].num,f[2].den,tempstruct.num,tempstruct.den);
  return 0;
}

int main(void)
{
  Fraction f[3];
  int num1,num2, num3,den1,den2,den3;
  int input();
  int lcm(int a,int b);
  int find_lcm();
  int temp();
  int output()
}