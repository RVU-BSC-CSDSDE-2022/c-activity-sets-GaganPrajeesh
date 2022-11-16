//Write a C program to find sum of all natural numbers until n.

#include <stdio.h>

int input();
int input()
{
    int a;
    printf("How many number you want to add:");
    scanf("%d",&a);
    return a;
}

int sum(int);
int sum(int b)
{
    int r,i;
    r=0;
    for(i=0;i<=b;i++)
    r=r+i;
    return r;
}

void output(int,int);
void output(int c,int d)
{
    printf("The sum of first %d numbers is %d",c,d);
}

int main()
{
    int n,x;
    n=input();
    x=sum(n);
    output(n,x);
    return 0;
}