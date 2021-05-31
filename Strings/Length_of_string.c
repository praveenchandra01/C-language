#include<stdio.h>
int main()
{
  char str[20];
  int i;
  printf("Enter string : ");
  gets(str);

  
  for(i=0;str[i];i++);
  printf("Length of string is %d",i);

  i=0;
  while(str[i]!='\0')
  {
    i++;
  }
  printf("\nLength of string is %d",i);

  return 0;
}
