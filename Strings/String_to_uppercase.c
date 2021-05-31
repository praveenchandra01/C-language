#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  // printf("Enter string : ");
  puts("Enter string : "); //moves cursor to new line
  gets(str);
  // puts(str);
  // printf("%s",strupr(str));
  // strupr(str);
  for(int i=0;str[i];i++)
  {
    if(str[i]>='a' && str[i]<='z')
      str[i]=str[i]-32;
  }
  printf("String in uppercase : ");
  puts(str);
  return 0;
}
