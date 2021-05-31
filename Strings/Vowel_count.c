#include<stdio.h>
int main()
{
  char str[20];
  int i,c=0;
  printf("Enter string : ");
  gets(str);
  for(i=0;str[i];i++)
  {
    if(str[i]=='a')
      c++;
    else if(str[i]=='e')
      c++;
    else if(str[i]=='i')
      c++;
    else if(str[i]=='o')
      c++;
    else if(str[i]=='u')
      c++;
  }
  printf("Total vowel in %s are %d",str,c);
  return 0;
}
