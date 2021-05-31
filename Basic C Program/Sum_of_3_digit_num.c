#include<stdio.h>
#include<conio.h>
int main()
{
  int n,r,s=0;
  printf("Enter the number :");
  scanf("%d",&n);
  s=n%10 + n/10%10 + n/100;
  printf("Sum of three digit is : %d",s);
  return 0;
  getch();
}
