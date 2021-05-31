#include<stdio.h>
int SumDigit(int);
int main()
{
  int a;
  printf("Enter number :");
  scanf("%d",&a);
  printf("Sum of digit %d is %d",a,SumDigit(a));
  return 0;
}
int SumDigit(int n)
{
  if(n==0)
    return 0;
  else
    return n%10 + SumDigit(n/10);
}
