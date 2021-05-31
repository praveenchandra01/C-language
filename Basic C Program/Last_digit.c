#include<stdio.h>
#include<conio.h>
int main()
{
  int n;
  printf("Enter a number :");
  scanf("%d",&n);
  n%=10;
  printf("Last digit is %d",n);
  return 0;
  getch();
}
