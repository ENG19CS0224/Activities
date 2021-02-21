//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct
{
 int N;
 int D;

}fraction;

fraction Add(fraction a1,fraction a2)
{
  fraction Sum={(a1.N* a2.D) + (a2.N * a1.D), a1.D * a2.D};
  int gcd=1;
  for(int i=1;i<=Sum.N && i<=Sum.D;i++)
  {
   if(Sum.N%i==0 && Sum.D%i==0)
    {
     gcd=i;
    }
  }
   Sum.N= Sum.N/gcd;
   Sum.D= Sum.D/gcd;
   return Sum;
}
fraction input(int n)
{
 fraction f;
 printf("Enter the fraction %d(N/D):",n);
 scanf("%d/%d",&f.N,&f.D);
 return f;
}
void Output(fraction a1,fraction a2,fraction Sum)
{
  printf("The Sum of the fraction 1(%d/%d) and 2(%d/%d) is %d/%d",a1.N,a1.D,a2.N,a2.D,Sum.N,Sum.D);
}
int main()
{
 fraction a1 =input(1);
 fraction a2 =input(2);
 Output(a1,a2,Add(a1,a2));
 return 0;
}
