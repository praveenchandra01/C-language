#include<stdio.h>
int Square(int n)
{
  if(n==1)
    return 1;
  else{
    return n*n + Square(n-1);
  }
}

int main()
{
  int n,r;
  printf("Enter limit : ");
  scanf("%d",&n);
  r=Square(n);
  printf("%d",r);
  return 0;
}
