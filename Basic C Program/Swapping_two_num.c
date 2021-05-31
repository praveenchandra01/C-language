#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c;
  printf("Enter the value of a and b :");
  scanf("%d%d",&a,&b);
  printf("Values before swapping : a=%d and b=%d\n",a,b);
  c=a;
  a=b;
  b=c;
  printf("Values after swapping : a=%d and b=%d",a,b);
  return 0;
  getch();
}
