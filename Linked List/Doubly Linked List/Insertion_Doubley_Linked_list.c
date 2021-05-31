#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
} * START;
struct node *createNode(int n)
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->data = n;
  temp->next = NULL;
  temp->prev = NULL;
  return temp;
}
void insertAtBegin(int n)
{
  struct node *newNode;
  newNode = createNode(n);
  if (START == NULL)
    START = newNode;
  else
  {
    newNode->next = START;
    START->prev = newNode;
    START = newNode;
  }
}
void insertAtEnd(int n)
{
  struct node *newNode;
  newNode = createNode(n);
  struct node *ptr;
  if (START == NULL)
    START = newNode;
  else
  {
    ptr = START;
    while (ptr->next != NULL)
      ptr = ptr->next;
    ptr->next = newNode;
    newNode->prev = ptr;
  }
}
void insertAtPos(int n)
{
  struct node *newNode;
  newNode = createNode(n);
  int pos, i = 1;
  struct node *ptr;
  printf("\nEnter position : ");
  scanf("%d", &pos);
  ptr = START;
  if (pos == 1)
    insertAtBegin(n);
  else
  {
    while (i < pos - 1)
    {
      ptr = ptr->next;
      i++;
    }
    newNode->next = ptr->next;
    newNode->prev = ptr;
    ptr->next = newNode;
    newNode->next->prev = newNode;
  }
}
void viewList()
{
  struct node *ptr;
  if (START == NULL)
    printf("List is Empty");
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
void viewListRev()
{
  struct node *ptr;
  if (START == NULL)
    printf("List is Empty");
  else
  {
    ptr = START;
    while (ptr->next != NULL)
      ptr = ptr->next;
    while (ptr != NULL)
    {
      printf("%d ", ptr->data);
      ptr = ptr->prev;
    }
  }
}
int main()
{
  insertAtBegin(30);
  insertAtBegin(20);
  insertAtBegin(10);
  insertAtEnd(40);
  insertAtEnd(50);
  viewList();
  insertAtPos(5);
  viewList();
  printf("\n");
  viewListRev();
}
