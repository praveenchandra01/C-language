#include<stdio.h>
int N_Rev(int n)
{
  if(n==1)
  {
    printf("%d",n);
  }
  else
  {
    printf("%d ",n);
    N_Rev(n-1);
  }

}
int main()
{
  int n;
  printf("Enter limit : ");
  scanf("%d",&n);
  N_Rev(n);
  return 0;
}
