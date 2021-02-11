//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct point
{
  float a,b;
};
int main()
{
  struct point A,B;
  float d;
  printf("Enter the points:");
  scanf("%f%f%f%f",&A.a,&A.b,&B.a,&B.b);
  d = sqrt(pow((A.a-B.a),2)+pow((A.b-B.b),2);
  printf("\nDistance between points A-(%f,%f) and B-(%f,%f) is %f\n",A.a,B.a,A.b,B.b);
  return 0;
}
