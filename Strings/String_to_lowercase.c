#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  printf("Enter string : ");
  gets(str);
  // printf("%s",strlwr(str));
  for(int i=0;str[i];i++)
  {
    if(str[i]>='A' && str[i]<='Z')
      str[i]=str[i]+32;
  }
  printf("String in lowercase : ");
  puts(str); //moves cursor to new line
  return 0;
}
