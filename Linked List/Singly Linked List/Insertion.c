#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *START;
struct node *createNode(int n)
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  // printf("Enter data in LinkedList :");
  // scanf("%d",&temp->data);
  temp->data = n;
  temp->next = NULL;
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
    START = newNode;
  }
}

void insertAtEnd(int n)
{
  struct node *newNode, *ptr;
  newNode = createNode(n);
  if (START == NULL)
    START = newNode;
  else
  {
    ptr = START;
    while (ptr->next != NULL)
      ptr = ptr->next;
    ptr->next = newNode;
  }
}

struct node insertAtPos(int n)
{
  int pos, i = 1;
  struct node *newNode, *ptr;
  newNode = createNode(n);
  ptr = START;
  printf("\nEnter the position at which you want to enter node :");
  scanf("%d", &pos);
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
    ptr->next = newNode;
  }
}

void CountNode()
{
  struct node *ptr;
  int c = 0;
  if (START == NULL)
    printf("List is empty");
  else
  {
    ptr = START;
    while (ptr != NULL)
    {
      ptr = ptr->next;
      c++;
    }
  }
  printf("\nNumber of nodes in list : %d\n", c);
}

void viewList()
{
  struct node *newNode, *ptr;
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
  CountNode();
  insertAtBegin(20);
  insertAtBegin(30);
  insertAtBegin(40);
  insertAtEnd(10);
  viewList();
  CountNode();
  insertAtPos(5);
  viewList();
  CountNode();
}
