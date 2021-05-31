#include<stdio.h>
int Fact(int n)
{
  if(n==1||n==0)
    return 1;
  else
    return n*Fact(n-1);
}
int main()
{
  int n;
  printf("Enter number : ");
  scanf("%d",&n);
  printf("Factorial of %d is %d",n,Fact(n));
  return 0;
}
