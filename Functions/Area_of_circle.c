#include<stdio.h>
float AreaCircle(float);
int main()
{
  float a,r;
  printf("Enter the radius : ");
  scanf("%f",&r);
  a = AreaCircle(r);
  printf("Area of Circle is : %f",a);
  return 0;
}
float AreaCircle(float x)
{
  float ar,pi = 3.14;
  ar = pi*x*x;
  return ar;
}
