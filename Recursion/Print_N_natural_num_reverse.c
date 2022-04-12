#include<stdio.h>
void N_Rev(int n)
{
  if (n==0) return;

    printf("%d ",n);
    N_Rev(n-1);

}
int main()
{
  int n;
  printf("Enter limit : ");
  scanf("%d",&n);
  N_Rev(n);
  return 0;
}
