#include<stdio.h>
#include<stdlib.h>
struct book
{
  int bookid;
  char title[20];
  float price;
};
int main()
{
  struct book b1;
  FILE *fp;
  fp=fopen("myFile.dat","rb");
  if(fp==NULL)
  {
    printf("File cannot open");
    exit(1);
  }
  // fread(&b1,sizeof(b1),2,fp);  //fread(&var,sizeof(var),no. of record,fp)
  while(fread(&b1,sizeof(b1),1,fp)>0)
    printf("%d   %s   %f\n",b1.bookid,b1.title,b1.price);
  fclose(fp);
  return 0;
}
