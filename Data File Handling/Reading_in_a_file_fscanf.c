#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b,c;
  FILE *fp;
  fp=fopen("f2.txt","r");
  if(fp==NULL)
  {
    printf("File Not Found");
    exit(1);
  }
  fscanf(fp,"%d,%d,%d",&a,&b,&c); //if data is seprated by ,
  // fscanf(fp,"%d %d %d",&a,&b,&c);
  printf("a=%d b=%d c=%d",a,b,c);
  fclose(fp);
  return 0;
}
