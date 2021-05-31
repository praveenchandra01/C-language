#include<stdio.h>
int CheckNum(int);
int main(){
  int n,r;
  printf("Enter the Number : ");
  scanf("%d",&n);
  r=CheckNum(n);
  if(r==1){
    printf("Even");
  }else{
    printf("Odd");
  }
  return 0;
}
int CheckNum(int x){
  if(x%2==0)
    return 1;
  else
    return 0;
}
