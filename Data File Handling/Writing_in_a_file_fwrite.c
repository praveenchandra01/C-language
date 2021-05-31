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
  fp=fopen("myFile.dat","ab");
  if(fp==NULL)
  {
    printf("File cannot open");
    exit(1);
  }
  printf("Enter bookid, title & price : ");
  scanf("%d",&b1.bookid);
  fflush(stdin);
  gets(b1.title);
  scanf("%f",&b1.price);

  fwrite(&b1,sizeof(b1),1,fp); //fwrite(&var,sizeof(var),no. of record,fp)
  fclose(fp);
  return 0;
}
