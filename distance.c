//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

int pointA()
{
   float a;
   printf("Enter the values a:");
   scanf("%f",&a);
   return a;
}
int pointB()
{
  float b;
  printf("Enter the values b:");
  scanf("%f",&b);
   return b;
}
void distance(float a1,float b1,float a2,float b2)
{
  float d;
  d = (sqrt(pow((a1-a2),2)+pow((b1-b2),2)));
  printf("Distance between point1-(%d,%d) and point2-(%d,%d) is %f",a1,b1,a2,b2,d);

}

int main()
{
  float a1,b1,a2,b2,d;
  a1 = pointA();
  b1 = pointB();
  a2 = pointA();
  b2 = pointB();
  distance(a1,b1,a2,b2);
  return 0;
}
