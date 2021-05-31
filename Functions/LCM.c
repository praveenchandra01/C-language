#include<stdio.h>
int LCM(int x,int y){
  int max,i;
  max=x>y?x:y;
  for(i=max;i<=x*y;i++){
    if(i%x==0 && i%y==0)
    return i;
  }

}
int main(){
  int a,b,r;
  printf("Enter two number : ");
  scanf("%d%d",&a,&b);
  r=LCM(a,b);
  printf("LCM of %d and %d is %d",a,b,r);
  return 0;
}
