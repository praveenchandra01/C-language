#include<stdio.h>
int Odd_N(int i,int n)
{
  if(i>n)
   return 0;
  printf("%d ",i);
  Odd_N(i+2,n);

}
int main()
{
  int n,i=1;
  printf("Enter limit : ");
  scanf("%d",&n);
  Odd_N(i,n);
  return 0;
}
