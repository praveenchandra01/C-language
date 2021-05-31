#include<stdio.h>
#include<stdlib.h>
int main()
{
  char str[20];
  FILE *fp;
  fp=fopen("f1.txt","a");
  if(fp==NULL)
  {
    printf("File cannot open");
    exit(1);
  }
  printf("Enter your name :");
  gets(str);
  fputs(str,fp);
  fclose(fp);
  return 0;
}
