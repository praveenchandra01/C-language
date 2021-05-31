#include<stdio.h>
int main()
{
  int i,n,fact=1;
  printf("Enter the number :");
  scanf("%d",&n);
  if(n<0)
  {
    printf("Factorial of negative number not possible");
  }
  else if(n==0)
  {
    printf("Factorial of 0 is 1");
  }
  else{
    for(i=1;i<=n;i++)
          fact=fact*n;
    printf("Factorial of %d is %d",n,fact);
    return 0;
  }
}
