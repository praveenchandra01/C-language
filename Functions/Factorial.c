#include<stdio.h>
int Factorial(int x){
  int i,fact = 1;
  for(i=1;i<=x;i++)
    fact=fact*i;
  return fact;
}
int main(){
  int n,r;
  printf("Enter the Number : ");
  scanf("%d",&n);
  if(n<0)
    printf("Factorial of negative number not possible");
  else if(n==0)
    printf("Factorail of 0 is 1");
  else{
    r=Factorial(n);
    printf("Factorial of %d is %d",n,r);
  }
  return 0;
}
