#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *START = NULL;
struct node *createNode()
{
  struct node *n;
  n = (struct node *)malloc(sizeof(struct node));
  return n;
}
void insertNode() //insert at end
{
  struct node *newNode, *ptr;
  newNode = createNode();
  printf("Enter data in LinkedList :");
  scanf("%d", &newNode->data);
  newNode->next = NULL;
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
void deleteNode() //delete beginning node
{
  struct node *ptr;
  if (START == NULL)
    printf("List is empty");
  else
  {
    ptr = START;
    START = START->next;
    free(ptr);
  }
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
  int ch;
  printf("1. Insert node in list");
  printf("\n2. Delete node from list");
  printf("\n3. View list");
  printf("\n4. exit\n");
  while (1)
  {
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      insertNode();
      break;
    case 2:
      deleteNode();
      break;
    case 3:
      viewList();
      break;
    case 4:
      exit(0);
      break;
    default:
      printf("Invalid Choice");
    }
  }
}
