#include<stdio.h>
int Sum(int n)
{
  if(n==1)
    return 1;
  else
    return n+Sum(n-1);
}
int main()
{
  int n,r;
  printf("Enter a number : ");
  scanf("%d",&n);
  r=Sum(n);
  printf("Sum upto %d is %d",n,r);
  return 0;
}
