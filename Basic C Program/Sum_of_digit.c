#include<stdio.h>
int main()
{
  int n,x,s=0,r;
  printf("Enter a number :");
  scanf("%d",&n);
  x=n;
  while (x)
  {
    r=x%10;
    s=s+r;
    x/=10;
  }
  printf("Sum of digit %d is %d",n,s);
  return 0;
}
