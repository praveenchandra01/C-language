#include<stdio.h>
struct book {
  int bookid;
  char title[20];
  float price;
};
void input(struct book *);
void display(struct book);
int main()
{
  struct book b1;
  input(&b1);
  display(b1);
  return 0;
}
void input(struct book *p)
{
  printf("Enter bookid title & price : \n");
  scanf("%d",&p->bookid);
  fflush(stdin); //flush data present in buffer
  gets(p->title);
  // scanf("%s",&b.title);
  scanf("%f",&p->price);
}
void display(struct book b)  //return nothing
{
  printf("\nBookid = %d\nTitle = %s\nPrice = %f",b.bookid,b.title,b.price);

}
