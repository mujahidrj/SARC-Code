#include <stdio.h>

typedef struct node {
  int data;
  struct node *next;
} node;

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

node* createNode(int num) {
  node *temp;

  temp = malloc(sizeof(node) * 1);
  temp->data = num;
  temp->next = NULL;

  return temp;
}

node *tailInsert(node *head, int num)
{
  node *temp;
  if (head == NULL)
    return createNode(num);

  temp = head;
  
  // Finds last node in LL
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = createNode(num);
	return head;	
}

// Inserts node at head of LL and returns new head
node *headInsert (node *head, int num) 
{
  node* newHead = createNode(num);
	
  if (head == NULL)
    return newHead;

  newHead->next = head;
}

// Inserts node at Nth position and returns head of LL
node *nthInsert(node *head, int position, int data)
{
  node *temp;
	node* newNode;
  newNode = createNode(data);
  int counter = 1;
  
  if (head == NULL)
    return newNode;

  temp = head;

  while(temp != NULL)
  {
    if(counter + 1 == position)
    {
      newNode->next=temp->next;
      temp->next = newNode;
    }
    temp = temp->next;
    counter++;
  }
  return head;
}

int main(void) {
  printf("Hello World\n");
  return 0;
}



