#include<stdio.h>
#include<conio.h>
int main()
{
  int x;
  printf("Enter number:");
  scanf("%d",&x);
  x>0?printf("Positive Number"):printf("non-positive number");
  // x>0?printf("Positive Number"),printf("\nUsing conditional operator"):printf("non-positive number");
 return 0;
}
