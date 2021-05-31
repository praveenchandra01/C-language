#include<stdio.h>
int main()
{
  char str[20];
  int A=0,D=0;
  printf("Enter String : ");
  gets(str);
  for(int i=0;i<str[i];i++)
  {
    if(str[i]>='a'&& str[i]<='z' || str[i]>='A'&& str[i]<='Z')
      A=1;
    if(str[i]>='0'&& str[i]<='9')
      D=1;
  }
  if(A==1 && D==1)
    printf("%s is aplhanumeric",str);
  else
    printf("%s is not alphanumeric",str);
  return 0;
}
