#include <stdio.h>

typedef struct node
{
  int data;
  struct node *next;
} node;

node *createNode(int num)
{
  node *temp;

  temp = malloc(sizeof(node) * 1);
  temp->data = num;
  temp->next = NULL;

  return temp;
}

// Searches Linked List and returns 1 if element is in LL, or 0 if it is not in LL
int searchLL(node *head, int number)
{
  node *temp;

  if (head == NULL)
    return 0;

  temp = head;

  // Traversing until temp = null
  while (temp != NULL)
  {
    if (temp->data == number)
      return 1;
    temp = temp->next;
  }
  return 0;
}

// Given the head of a linked list and some data value,
// create a node with the value and insert it at the tail
// (end) of the linked list and return the head of the LL
node *tailInsertIterative(node *head, int value)
{
  node *newTail = createNode(value);

  if (head == NULL)
    return newTail;

  node *temp = head;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = newTail;
  return head;
}

node *tailInsertRecursive(node *head, int value)
{
  if (head == NULL)
    return createNode(value);

  head->next = tailInsertRecursive(head->next, value);
  return head;
}

// Inserts node at Nth position and returns head of LL
node *nthInsert(node *head, int position, int data)
{
  node *temp, *newNode;
  newNode = createNode(data);
  int counter = 1;

  if (head == NULL)
    return newNode;

  temp = head;

  while (temp != NULL)
  {
    if (counter + 1 == position)
    {
      newNode->next = temp->next;
      temp->next = newNode;
    }
    temp = temp->next;
    counter++;
  }
  return head;
}

// Given the head of a linked list and some data value,
// create a node with the value and insert it at the tail
// (end) of the linked list and return the head of the LL
node *tailInsertIterative(node *head, int value)
{
  node *newTail = createNode(value);

  if (head == NULL)
    return newTail;

  node *temp = head;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = newTail;
  return head;
}

node *tailInsertRecursive(node *head, int value)
{
  if (head == NULL)
    return createNode(value);

  head->next = tailInsertRecursive(head->next, value);
  return head;
}

// Write a function that deletes all even integers from a linked list.
void deleteEven(node *head)
{
  node *temp;

  if (head == NULL)
    printf("Head is NULL\n ");

  if (head->data % 2 == 0)
  {
    temp = head;
    head = head->next;
    free(temp);
    temp = temp->next;
  }

  while (head->next != NULL)
  {
    temp = head;
    if (head->next->data % 2 == 0)
    {
      temp = head->next;
      head->next = head->next->next;
      free(temp);
    }

    head = head->next;
  }
}

// done
void markEven(node *head)
{
  /*
  Summer 2018 Foundation Exam Question:

  Suppose we have a linked list implemented with the structure below. Write a function that will take in a
  pointer to the head of list and inserts a node storing -1 after each even value in the list. If the list is empty
  or there are no even values in the list, no modifications should be made to the list. (For example, if the
  initial list had 2, 6, 7, 1, 3, and 8, the resulting list would have 2, -1, 6, -1, 7, 1, 8, -1.)
  */

  if (head == NULL)
    return;

  // temp = head;
  int tempNum;

  while (head != NULL)
  {
    if (head->data % 2 == 0)
    {
      node *newNode = malloc(sizeof(node));
      newNode->data = -1;
      newNode->next = head->next;
      head->next = newNode;
    }
    head = head->next;
  }
}

// done
// Given the head of a linked list, creates a node and inserts it after the node that contains num in it's value field
void insertAfter(node *head, int num, int data)
{
  node *temp;

  if (head == NULL)
    return;
  // while (head->next != NULL && head->data != num)

  while (head->next != NULL)
  {
    if (head->data == num)
    {
      node *newNode = createNode(data);
      newNode->next = head->next;
      head->next = newNode;
      return;
    }
  }
}

// done
// Write a function that takes a sorted linked list and an element to be inserted into that linked list, and inserts the element in sorted order. The function signature is:
void insert_sorted(node *head, int n)
{
  if (head == NULL)
    return;

  while (head->next != NULL && head->data <= n)
  {
    head = head->next;
  }

  head->data = n;

  return;
}

// Given the head of a linked list, free it recursively
void freeRec(node *head)
{
  if (head == NULL)
    return;

  freeRec(head->next);
  free(head);
}

// done
// Write a recursive function that prints a linked list in reverse order. The function signature is:
void print_reverse(node *head)
{
  if (head == NULL)
    return;

  print_reverse(head->next);
  printf("%d", head->data);
}

void printList(node *head)
{
  while (head != NULL)
  {
    printf("%d ->%c", head->data, (head->next != NULL ? ' ' : '\n'));
    head = head->next;
  }

  return;
}

int main(void)
{
  printf("Hello World\n");
  return 0;
}
