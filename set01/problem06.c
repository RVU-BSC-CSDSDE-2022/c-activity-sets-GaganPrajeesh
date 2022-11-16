//Write a C program to compare three numbers using **pass by reference**.

#include <stdio.h>

int compare(int*,int* ,int*);
int compare(int *a,int *b,int *c)
{
if(*a>*b && *a>*c)
return *a;
else if(*b>*a && *b>*c)
return *b;
else
return *c;
}

int main()
{
int x,y,z;
printf(“Enter three numbers you want to compare”);
scanf(“%d %d %d”,&x,&y,&z);
printf("the largest of %d %d %d is %d",x,y,z,compare(&x,&y,&z));
return 0;
}