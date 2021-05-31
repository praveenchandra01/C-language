#include<stdio.h>
int main()
{
  int n,x,r,rev=0;
  printf("Enter a number :");
  scanf("%d",&n);
  x=n;
  while(x!=0)
  {
    r=x%10;
    rev=rev*10+r;
    x=x/10;
  }
  if(rev==n)
    printf("%d is a palindrome number",n);
  else
    printf("Not a palindrome number");
  return 0;
}
