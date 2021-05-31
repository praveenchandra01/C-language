#include<stdio.h>
int main()
{
  int n,rem,b=0,i=1;
  printf("Enter a decimal number : ");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%2;
    n=n/2;
    b=b+(rem*i);
    i=i*10;
  }
  printf("Binary equivalent :  %d ",b);
  return 0;
}
