#include<stdio.h>
int isPrime(int x){
  int i;
  for(i=2;i<=x/2;i++){
    if(x%i==0)
      return 0;
    }
    return 1;

}
int main(){
  int n,r;
  printf("Enter a Number : ");
  scanf("%d",&n);
  r=isPrime(n);
  if(r==1)
    printf("Prime Number");
  else
    printf("Not a prime number");
  return 0;
}
