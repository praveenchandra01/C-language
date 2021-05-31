#include<stdio.h>
int main()
{
  int n,i,c=0;
  printf("Enter the number :");
  scanf("%d",&n);
  while(n)
  {
    n=n/10;
    c++;
  }
  printf("Total digits : %d",c);
  return 0;
}
