// Write a program to find sum of two fractions.

#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the numerator for 1st number: ");
    scanf("%d",num1);
    printf("Enter the denominator for 1st number: ");
    scanf("%d",den1);
    printf("Enter the numerator for 2nd number: ");
    scanf("%d",num2);
    printf("Enter the denominator for 2nd number: ");
    scanf("%d",den2);
}


void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
  int gcd_no;
    *res_num=(int)(num1*den2)+(int)(den1*num2); 
    
    *res_den=(int)(den1*den2); 
    
    for(int c=1; c <= *res_num && c <= *res_den; ++c)
    {
       if(*res_num%c==0 && *res_den%c==0)
          gcd_no = c;
    }

  *res_num= (int)(*res_num/gcd_no);
  *res_den=(int)(*res_den/gcd_no);  
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
  printf("(%d / %d) + (%d / %d) = (%d / %d)", num1, den1, num2, den2, res_num, res_den);
}


int main()
{
  int num1,den1,num2,den2,res_num,res_den; 
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&res_num,&res_den);
  output(num1,den1,num2,den2,res_num,res_den);
  return 0;
}