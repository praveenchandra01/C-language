#include<stdio.h>
int DtoB(int n)
{
  if(n==1)
    return 1;
  else
  return n%2+10*DtoB(n/2);
}
int main()
{
  int n;
  printf("Enter Decimal number : ");
  scanf("%d",&n);
  printf("%d",DtoB(n));
  return 0;
}
