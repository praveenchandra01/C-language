#include<stdio.h>
int HCF(int ,int);
int main()
{
  int a,b;
  printf("Enter two number :");
  scanf("%d%d",&a,&b);
  printf("HCF of %d and %d is %d",a,b,HCF(a,b));
  return 0;
}
int HCF(int a, int b)
{
  int r;
  r=a%b;
  if(r==0)
    return b;
  else
    return HCF(b,r);
}
