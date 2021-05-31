#include<stdio.h>
int Combination(int,int);
int Permutation(int,int);
int Fact(int);
int main()
{
  int a,b,c,p;
  printf("Enter value of n and r : ");
  scanf("%d%d",&a,&b);
  p=Permutation(a,b);
  printf("Permutaions : %d",p);
  c=Combination(a,b);
  printf("\nCombianations : %d",c);
  return 0;
}

int Permutation(int n,int r){
  int p;
  p=Fact(n)/Fact(n-r);
  return p;
}

int Combination(int n,int r){
  int c;
  c=Fact(n)/(Fact(r)*Fact(n-r));
  return c;
}

int Fact(int n){
  int f=1;
  for(int i=1;i<=n;i++){
    f=f*i;
  }
  return f;

}
