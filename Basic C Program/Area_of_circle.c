#include<stdio.h>
#include<conio.h>
// #define pi 3.14
int main()
{
  int r;
  float a;
  printf("Enter the radius of a circle :");
  scanf("%d",&r);
  a=3.14*r*r;
  // a=pi*r*r;
  printf("Area of circle is %f",a);
  return 0;
  getch();
}
