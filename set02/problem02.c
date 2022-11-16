2.  Write a program to find the weight of a camel, given height, length and stomach radius using four functions.

> `weight = pi * stomach_radius^3 * sqrt(height * length)`

***Function Declarations***
  
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);


include <stdio.h>
include <math.h>

void input_camel_details(float *radius, float *height, float *length);
float a,b,c;
printf("Input radius of camel:",a);
  scanf(%f,a);
