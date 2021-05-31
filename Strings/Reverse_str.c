#include<stdio.h>
char* RevString(char str[])
{
  int i,l;
  char ch;
  for(l=0;str[l];l++);
  for(i=0;i<l/2;i++)
  {
    ch=str[i];
    str[i]=str[l-1-i];
    str[l-1-i]=ch;
  }
  return str;
}
int main()
{
  char str[20];
  printf("Enter string :\n");
  gets(str);
  printf("%s",RevString(str));
  return 0;
}
