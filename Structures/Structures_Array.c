#include<stdio.h>
struct book {
  int bookid;
  char title[20];
  float price;
};
struct book input();
void display(struct book);
int main()
{
  struct book b[5]; //Structure Array
  int i;
  for(i=0;i<5;i++)
    b[i]=input();
  for(i=0;i<5;i++)
    display(b[i]);
  return 0;
}
struct book input()
{
  struct book b;
  printf("Enter bookid title & price : \n");
  scanf("%d",&b.bookid);
  fflush(stdin); //flush data present in buffer
  gets(b.title);
  scanf("%f",&b.price);
  return b;
}
void display(struct book b) //return nothing
{
  printf("\n%d %s %f",b.bookid,b.title,b.price);

}
