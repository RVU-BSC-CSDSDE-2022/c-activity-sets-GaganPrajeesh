//Write a program to find the weight of a camel, given height, length and stomach radius using four functions.

#include<stdio.h>
#include<math.h>

void input_camel_details(float *radius,float *height,float *length)
  {
    printf("Enter the radius\n");
    scanf("%f",radius);

    printf("Enter the height\n");
    scanf("%f",height);

    printf("Enter the length\n");
    scanf("%f",length);
  }

  float find_weight(float radius,float height,float length)
  { 
    //weight = pi * stomach_radius^3 * sqrt(height * length)`
    float weight;
    int a,b,c;
    a= pow(radius,3);
    b= height*lenght;
    c= sqrt(b);
    weight= 3.14*a*c;
    return weight;
  }
  
    int main()
  {
    float e,f,g,h;
    input_camel_details(&e,&f,&g);
    h = find_weight(e,f,g);
    printf("The weight of camel is %f\n",h);
    return 0;
  }