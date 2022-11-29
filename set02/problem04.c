//Write a program to find out the mood of a Camel.

#include <stdio.h>

void input_camel_details(float *radius,float *height,float *length)
{
  printf("Enter the radius:\n");
  scanf("%f",radius);

  printf("Enter the height:\n");
  scanf("%f",height);

  printf("Enter the length:\n");
  scanf("%f",length);
  }

int find_mood(float radius, float height, float length)
{ 
  int mood;
  if(radius<height && radius<length)
    mood = -1;
  else if(height<radius && height<length)
    mood = 0;
  else if(length<radius && length<height)
    mood = 1;
  else 
    printf("Wrong Input");
}

void output(float radius, float height, float length, int mood)
{
  if(mood==-1)
    printf("Camel is sick");
  else if(mood==0)
    printf("Camel is happy");
  else 
    printf("Camel is tense");
}

int main()
  {
    float e,f,g,h;
    input_camel_details(&e,&f,&g);
    h = find_mood(e,f,g);
    output(e,f,g,h);
    return 0;
  }