// Write a program to find the triangle with smallest area in n given triangles.

#include <stdio.h>

typedef struct _triangle 
{
  float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int input_n()
{
  int n;
  printf("Enter the number of triangles:\n");
  scanf("%d",&n);
  return n;
}

Triangle input_triangle()
{
  Triangle T;
  printf("Enter the base of the triangle:\n");
  scanf("%f",&T.base);
  printf("Enter the altitude of the triangle:\n");
  scanf("%f",&T.altitude);
  return T;
}

void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0; i<n; i++)
    {
      t[i]= input_triangle();
    }
}

void find_area(Triangle *t)
{
  ((t->base)*(t->altitude)) *0.5;
}

void find_n_areas(int n, Triangle t[n])
{
  for(int i=0; i<n; i++)
    {
      find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle smallest = t[0];
  for (int i=1; i<n; i++)
    {
      if (t[i].area<smallest.area)
      {
        smallest=t[i];
      }
    }
  return smallest;
}

void output(int n, Triangle t[n], Triangle smallest)
{
  printf("The smallest triangle out of triangles with base and height ");
  for(int i=0; i<n; i++)
    {
      printf(("(%f,%f) "),t[i].base,t[i].altitude);
    }
  printf("is the triangle with base %f, height %f and area %f\n", smallest.base, smallest.altitude, smallest.area);
}

int main()
{
  int n;
  n=input_n();
  Triangle T[n], smallest;
  input_n_triangles(n,T);
  find_n_areas(n,T);
  smallest = find_smallest_triangle(n,T);
  output(n,T,smallest);
  return 0;
}