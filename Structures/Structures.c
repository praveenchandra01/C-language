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
  struct book b1;
  b1=input();
  display(b1);
  return 0;
}
struct book input()
{
  struct book b;
  printf("Enter bookid title & price : \n");
  scanf("%d",&b.bookid);
  fflush(stdin); //flush data present in buffer
  gets(b.title);
  // scanf("%s",&b.title);
  scanf("%f",&b.price);
  return b;
}
void display(struct book b)  //return nothing
{
  printf("\nBookid = %d\nTitle = %s\nPrice = %f",b.bookid,b.title,b.price);

}
