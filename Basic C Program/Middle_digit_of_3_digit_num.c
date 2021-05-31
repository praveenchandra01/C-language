#include<stdio.h>
#include<conio.h>
int main()
{
  int n;
  printf("Enter a number :");
  scanf("%d",&n);
  n/=10; //n=n/10
  n%=10; //n=n%10
  printf("Middle digit is : %d",n);
  return 0;
  getch();
}
