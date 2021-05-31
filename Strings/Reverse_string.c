#include<stdio.h>
int main()
{
  char str[20],ch;
  int i,length=0;
  puts("Enter string :");
  gets(str);
  while(str[length]!='\0')
    length++;
  // for(length=0;s[length];length++);
  for(i=0;i<length/2;i++)
  {
    ch=str[i];
    str[i]=str[length-1-i];
    str[length-1-i]=ch;
  }
  printf("String after reversing %s",str);
  return 0;
}
