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
int CountNode()
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
  printf("\nNumber of nodes in list : %d", c);
}
int main()
{

  int ch, temp;
  printf("1. Insertion at beginning");
  printf("\n2. Insertion at end");
  printf("\n3. Insertion at specific positions");
  printf("\n4. Deletion from beginning");
  printf("\n5. Deletion from end");
  printf("\n6. Deletion from specific position");
  printf("\n7. Count number of nodes");
  printf("\n8. View list");
  printf("\n9. Exit\n");
  while (1)
  {
    printf("\nEnter your choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      printf("Enter data in LinkedList :");
      scanf("%d", &temp);
      insertAtBegin(temp);
      break;
    case 2:
      printf("Enter data in LinkedList :");
      scanf("%d", &temp);
      insertAtEnd(temp);
      break;
    case 3:
      printf("Enter data in LinkedList :");
      scanf("%d", &temp);
      insertAtPos(temp);
      break;
    case 4:
      Del_BEG();
      break;
    case 5:
      Del_END();
      break;
    case 6:
      Del_POS();
      break;
    case 7:
      CountNode();
      break;
    case 8:
      viewList();
      break;
    case 9:
      exit(0);
    default:
      printf("Invalid choice");
    }
  }
}
