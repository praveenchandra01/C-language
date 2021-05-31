#include<stdio.h>
int main()
{
  int n,x,r,s=0;
  printf("Enter a number :");
  scanf("%d",&n);
  x=n;
  while(x)
  {
    r=x%10;
    s=s+r*r*r;
    x=x/10;
  }
  if(s==n)
    printf("%d is a armstrong number",n);
  else
    printf("Not a armstrong number");
  return 0;
}
