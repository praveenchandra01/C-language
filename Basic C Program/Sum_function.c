#include<stdio.h>
int sum(int,int);
int main()
{
  int x,y,s;
  printf("Enter two numbers:");
  scanf("%d%d",&x,&y);
  s=sum(x,y);
  printf("Sum of %d and %d is %d",x,y,s);
  return 0;
}
int sum(int a,int b)
{
  int c;
  c=a+b;
  return(c);
}
