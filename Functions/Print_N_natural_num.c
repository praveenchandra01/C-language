#include<stdio.h>
int PrintN(int);
int main(){
  int N;
  printf("Enter Limit : ");
  scanf("%d",&N);
  PrintN(N);
  return 0;
}
int PrintN(int x){
  int i=1;
  // for(i=1;i<=x;i++)
      // printf(" %d ",i);

  while(i<=x){
  printf(" %d ",i);
  i++;
}
}
