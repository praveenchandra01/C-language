#include<stdio.h>
#include<stdlib.h>
int main()
{
  char str[10];
  FILE *fp;
  fp=fopen("f1.txt","r");
  if(fp==NULL)
  {
    printf("File not found");
    exit(1);
  }
  // fgets(str,5,fp); //5 char len is 0-4 last char is null char(\n)
  while(fgets(str,9,fp)!=NULL)
    printf("%s",str);
  fclose(fp);
  return 0;
}
