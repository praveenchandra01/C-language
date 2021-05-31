#include<stdio.h>
int Fibo(int n)
{
  if(n==1 || n==0)
    return n;
  else
    return Fibo(n-1)+Fibo(n-2);
}
int main()
{
  int n;
  printf("Enter limit : ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    printf("%d ",Fibo(i));
  return 0;
}
