//Write a program to find the distance between two points.

#include <stdio.h>
#include <math.h>

struct_point
{
  float x;
  float y;
};

typedef struct_point Point;

Point input()
{
  Point a;
  printf("Enter the x-axis co-cordinates of the point:");
  scanf("%f",&a.x);
  printf("Enter the y-axis co-cordinates of the point:");
  scanf("%f",&a.y);
  return a;
}

float distance(Point c,Point d)
{
  float res1,res2;
  float dist,e,f,g;
  res1=d.x-c.x;
  res2=d.y-c..y;
  
  g=e+f;
  dist=sqrt(g);
  return dist;
}

void output(Point a,Point b,float dist)
{
  printf("The distance between Point %f,%f and Point %f,%f is %f",a.x,a.y,b.x,b.y,dist);
  }

int main()
{
  Point c,d;
  float h;
  c=input();
  d=input();
  h=distance(c,d);
  output(c,d,h);
  }
}