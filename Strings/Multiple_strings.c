#include<stdio.h>
int main()
{
  char str[5][10];
  int i,j;
  for(i=0;i<5;i++)
    gets(str[i]);
  printf("\nStrings are :\n");
  for(i=0;i<5;i++)
    printf("%s\n",str[i]);
    // puts(str[i]);
  return 0;
}
