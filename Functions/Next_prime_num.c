#include<stdio.h>
int NxtPrime(int n){
  int i;
    while(1){
      n++;
      for(i=2;i<n;i++)
        if(n%i==0)
          break;

      if(i==n)
        return n;
    }
}

int main(){
  int n,p;
  printf("Enter a Number : ");
  scanf("%d",&n);
  p=NxtPrime(n);
  printf("Next prime number after given number %d is %d",n,p);
  return 0;
}
