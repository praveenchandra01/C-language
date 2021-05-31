#include<stdio.h>
int isPrime(int i){
  int j;
    for(j=2;j<=i/2;j++)
    {
      if(i%j==0)
       return 0;
     }
    return 1;
   }

int main(){
  int i,a,b;
  printf("Enter Range:");
  scanf("%d%d",&a,&b);
  for(i=a+1;i<b;i++)
  {
   if(isPrime(i))
   {
     printf(" %d ",i);
   }
 }
 return 0;
}
