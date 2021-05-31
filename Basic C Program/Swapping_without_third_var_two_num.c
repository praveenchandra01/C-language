#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b;
  printf("Enter the value of a and b :");
  scanf("%d%d",&a,&b);
  printf("Values before swapping : a=%d and b=%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  // printf("Values after swapping : a=%d and b=%d",b,a);
  printf("Values after swapping : a=%d and b=%d",a,b);
  return 0;
  getch();
}
