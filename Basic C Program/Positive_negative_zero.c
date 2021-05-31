#include<stdio.h>
#include<conio.h>
int main()
{
  int x;
  printf("Enter number :");
  scanf("%d",&x);
  if(x>0)
    printf("Positive");
  else if (x<0)
    printf("Negative");
  else
    printf("Number is zero");
  return 0;
}
