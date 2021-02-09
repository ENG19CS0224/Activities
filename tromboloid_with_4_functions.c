#include<stdio.h>
float input()
{
   float n;
   printf("enter the values:");
   scanf("%f",&n);
   return n;
}
float volume(float h,float d,float b)
{
         float volume;
         volume = (((h*d*b)+(d/b))/3);
         return volume; 
}
void output(float h,float d, float b,float n)
{
  printf("volume_of_tromoboloid of %f,%f and %f is %f",h,d,b,n);
}
int main()
{
 float h,d,b,v;
 h = input();
 d= input();
 b= input();
 v = volume(h,d,b);
output(h,d,b,v);
return 0; 
}
