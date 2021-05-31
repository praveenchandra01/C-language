#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b;
  FILE *fp;
  fp=fopen("f2.txt","w");
  if(fp==NULL)
  {
    printf("File Not Found");
    exit(1);
  }
  printf("Enter two numbers : ");
  scanf("%d%d",&a,&b);
  fprintf(fp,"Sum of %d and %d is %d",a,b,a+b);
  fclose(fp);
  return 0;
}
