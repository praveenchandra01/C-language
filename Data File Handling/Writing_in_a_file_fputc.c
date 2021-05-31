#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  int i;
  char s[]="HelloWrold!";
  char s1[50];
  FILE *fp;
  fp=fopen("f1.txt","w");
  if(fp==NULL)
  {
    printf("File cannot open");
    exit(1);
  }
  printf("Enter String :");
  gets(s1);
  for(i=0;i<strlen(s1);i++)
    fputc(s1[i],fp);
  fclose(fp);  //Data saved to file
  return 0;
}
