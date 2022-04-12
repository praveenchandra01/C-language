#include<stdio.h>
// even no. under N;
void even_under_N(int i, int n){
  if(i>n) return;
  printf("%d ",i);
  even_under_N(i+2,n);
}
// total n even no.
void even_total_N(int i, int n){
  if(n==0) return;
  printf("%d ",i);
  even_total_N(i+2,n-1);
}

int main()
{
  int n,i=0;
  printf("Enter limit : ");
  scanf("%d",&n);
  even_under_N(i,n);
  printf("\n");
  even_total_N(i,n);
  return 0;
}
