#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
} * START;
void Del_BEG()
{
  struct node *ptr;
  if (START == NULL)
    printf("List is Empty");
  else if (START->next == NULL && START->prev == NULL)
  {
    ptr = START;
    START = NULL;
    free(ptr);
  }
  else
  {
    ptr = START;
    START = ptr->next;
    START->prev = NULL;
    free(ptr);
  }
}
void Del_END()
{
  struct node *ptr, *preptr;
  if (START == NULL)
    printf("List is empty");
  ptr = START;
  while (ptr->next != NULL)
  {
    preptr = ptr;
    ptr = ptr->next;
  }
  preptr->next = NULL;
  free(ptr);
}
void Del_POS()
{
  struct node *ptr, *nxtptr;
  int pos, i = 1;
  if (START == NULL)
    printf("List is empty");
  else
  {
    printf("\nEnter postion : ");
    scanf("%d", &pos);
    ptr = START;
    if (pos == 1)
      Del_BEG();
    else
    {
      while (i < pos)
      {
        ptr = ptr->next;
        i++;
      }
      ptr->prev->next = ptr->next;
      ptr->next->prev = ptr->prev;
      free(ptr);
    }
  }
}

void viewList()
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
  struct node *fourth;

  first = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  fourth = (struct node *)malloc(sizeof(struct node));

  START = first;
  first->data = 10;
  first->prev = NULL;
  first->next = second;

  second->data = 20;
  second->prev = first;
  second->next = third;

  third->data = 30;
  third->prev = second;
  third->next = fourth;

  fourth->data = 40;
  fourth->prev = third;
  fourth->next = NULL;

  viewList();
  // Del_BEG();
  // Del_END();
  Del_POS();
  printf("\n");
  viewList();
  return 0;
}
