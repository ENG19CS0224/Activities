//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

int a1,b1,a2,b2;
float d;

float input()
{
    printf("Enter the point1-(a1,b1) and point2-(a2,b2):");
    scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
    return 0;
}
float distance()
{
  float s;
  s= (pow((a1-a2),2)+pow((b1-b2),2));
  d = sqrt(s);
  return 0;
}
void output()
{
    printf("Distance between point1-(%d,%d) and point2-(%d,%d) is %f",a1,b1,a2,b2,d);
  return 0;
}
int main()
{

    input();
    distance();
    output();
    return 0;
}
