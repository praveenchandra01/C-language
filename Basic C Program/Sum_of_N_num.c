#include<stdio.h>
int main()
{
  int i,n,s=0;
  printf("Enter the number :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    s=s+i;
  }
  printf("Sum of First N natural number : %d",s);
  return 0;
}
