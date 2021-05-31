#include<stdio.h>
int index_of(char s[],char ch)
{
  for(int i=0;s[i];i++)
  {
    if(s[i]==ch)
      return i;
  }
  return -1;
}
int main()
{
  char str[20],ch;
  int i,r;
  printf("Enter string : ");
  gets(str);
  printf("Enter character to find its index : ");
  scanf("%c",&ch);
  r=index_of(str,ch);
  if(r==-1)
    printf("Entered character not found ");
  else
    printf("character found at index %d",r);
  return 0;
}
