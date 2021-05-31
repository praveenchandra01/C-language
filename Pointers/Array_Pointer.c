#include<stdio.h>
void input(int *,int);
void display(int *,int);
int main()
{
  int a[10];
  input(a,10);
  display(a,10);
  return 0;
}
void input(int *p,int n)
{
  printf("Enter Elements :\n");
  for(int i=0;i<n;i++)
    scanf("%d",p+i);
}
void display(int *p,int n)
{
  for(int i=0;i<n;i++)
    printf("%d ",*(p+i));
}
