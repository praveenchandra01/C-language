#include<stdio.h>
int Power(int b,int p){
  if(p==0)
  return 1;
  else
  return b*Power(b,p-1);
}
int main()
{
  int b,p;
  printf("Enter value of Base and Power : ",b,p);
  scanf("%d%d",&b,&p);
  printf("%d^%d=%d ",b,p,Power(b,p));
  return 0;
}
