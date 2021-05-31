#include<stdio.h>
int count_words(char str[])
{ int c=1;
  for(int i=0;str[i];i++)
  {
    if(str[i]==' ')
      c++;
  }
  return c;
}
int main()
{
  char str[20];
  printf("Enter string :\n");
  gets(str);
  printf("Total words in \'%s\' is %d",str,count_words(str));
  return 0;
}
