#include<stdio.h>
#include<conio.h>
int main()
{
  int x;
  printf("Enter number:");
  scanf("%d",&x);
  if(x>0)
  {
    printf("Positive Number");
  }
  // if(x<=0)
  else
  {
    printf("non-positive number");
  }
  return 0;
  getch();
}
