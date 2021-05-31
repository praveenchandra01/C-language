#include<stdio.h>
#include<conio.h>
int main(){
  int x;
  printf("Enter Number :");
  scanf("%d",&x);
  if(x%5==0)
  {
    printf("%d is divisible by 5",x);
  }
  else{
    printf("%d is not divisible by 5",x);
  }
  return 0;
}
