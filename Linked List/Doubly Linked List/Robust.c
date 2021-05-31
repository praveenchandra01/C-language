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
    // ptr=START;
    // START=ptr->next;
    // START->prev=NULL;
    // free(ptr);
    START = START->next;
    free(START->prev);
    START->prev = NULL;
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
int CountNode(struct node *temp)
{
  struct node *ptr;
  int c = 0;
  if (temp == NULL)
    printf("List is empty");
  else
  {
    ptr = temp;
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
  printf("Doubly Linked List");
  printf("\n1. Insertion at beginning");
  printf("\n2. Insertion at end");
  printf("\n3. Insertion at specific positions");
  printf("\n4. Deletion from beginning");
  printf("\n5. Deletion from end");
  printf("\n6. Deletion from specific position");
  printf("\n7. Count number of nodes");
  printf("\n8. View list (Forward traverse)");
  printf("\n9. View list (Backward traverse)");
  printf("\n10. Exit\n");
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
      CountNode(START);
      break;
    case 8:
      viewList();
      break;
    case 9:
      viewListRev();
      break;
    case 10:
      exit(0);
    default:
      printf("Invalid choice");
    }
  }
}
