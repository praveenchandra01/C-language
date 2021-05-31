#include<stdio.h>
int PrintN(int n)
{
  if (n==1)
    printf(" %d ",n);
  else {
    PrintN(n-1);
    printf("%d ",n);
  }
}
int main()
{
  int n;
  printf("Enter the limit :");
  scanf("%d",&n);
  PrintN(n);
  return 0;
}
