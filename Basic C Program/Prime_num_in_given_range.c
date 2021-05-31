#include<stdio.h>
int main(){
  int a,b,i,j;
  printf("Enter Range:");
  scanf("%d%d",&a,&b);
  for(i=a+1;i<b;i++)
  {
    for(j=2;j<i;j++)
    {
      if(i%j==0)
       break;
     }
   if(i==j){
     printf(" %d ",i);
   }
 }
}
