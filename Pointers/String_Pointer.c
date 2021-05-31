#include<stdio.h>
int length(char *);
int main()
{
  char str[]="BHOPAL";
  int l;
  l=length(str);
  printf("Length of %s is %d",str,l);
  return 0;
}
int length(char *p){
  int i;
  for(i=0;p[i];i++);
  return i;
}
