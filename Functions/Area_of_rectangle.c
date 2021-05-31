#include<stdio.h>
int AreaRect(int,int);
int main(){
  int l,b,a;
  printf("Entet the value of Leangth and breadth :");
  scanf("%d%d",&l,&b);
  a=AreaRect(l,b);
  printf("Area of rectangle is :%d",a);
  return 0;
}
int AreaRect(int x,int y){
  int ar;
  ar=x*y;
  return ar;
}
