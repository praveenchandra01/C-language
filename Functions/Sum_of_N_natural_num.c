#include<stdio.h>
int SumN(int);
int main(){
  int n;
  printf("Enter the Limit : ");
  scanf("%d",&n);
  SumN(n);
  return 0;
}
int SumN(int x){
  int s=0;
  for(int i=1;i<=x;i++)
    s=s+i;
  printf("Sum upto %d natural numbers is : %d",x,s);

}
