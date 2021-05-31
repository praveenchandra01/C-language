#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *START;
void Del_BEG()
{
  struct node *ptr;
  if (START == NULL)
    printf("List is Empty");
  else
  {
    ptr = START;
    START = ptr->next;
    free(ptr);
  }
}

void Del_END()
{
  struct node *ptr, *preptr;
  if (START == NULL)
    printf("List is Empty");
  else
  {
    ptr = START;
    while (ptr->next != NULL)
    {
      preptr = ptr;
      ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
  }
}

void Del_POS()
{
  int pos, i = 1;
  struct node *ptr, *nxtptr;
  if (START == NULL)
    printf("List is Empty");
  else
  {
    printf("\nEnter the position to delete node :");
    scanf("%d", &pos);
    ptr = START;
    if (pos == 1)
      Del_BEG();
    else
    {
      while (i < pos - 1)
      {
        ptr = ptr->next;
        i++;
      }
      nxtptr = ptr->next;
      ptr->next = nxtptr->next;
      free(nxtptr);
    }
  }
}

void ViewList()
{
  struct node *ptr;
  if (START == NULL)
    printf("List is empty");
  else
  {
    ptr = START;
    while (ptr != NULL)
    {
      printf("%d ", ptr->data);
      ptr = ptr->next;
    }
  }
}
int main()
{
  struct node *first;
  struct node *second;
  struct node *third;

  first = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));

  START = first;
  first->data = 10;
  first->next = second;

  second->data = 20;
  second->next = third;

  third->data = 30;
  third->next = NULL;

  ViewList();
  printf("\n");
  // Del_BEG();
  // Del_END();
  Del_POS();
  printf("\n");
  ViewList();

  return 0;
}
