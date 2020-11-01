/********************************************/
/*   Array based implementation of Stacks   */
/********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct stack
{
  int top;
  int *arr;
  int cap;
} stack;

stack *createStack(int capacity)
{
  stack *newStack = malloc(sizeof(stack));
  if (newStack == NULL)
    return NULL;

  newStack->top = -1;
  newStack->arr = malloc(capacity * sizeof(int));
  if (newStack->arr == NULL)
    return NULL;
  newStack->cap = capacity;

  return newStack;
}

void freeStack(stack *s)
{
  free(s->arr);
  free(s);
}

int isFull(stack *s)
{
  return s->top == s->cap - 1;
}

int isEmpty(stack *s)
{
  return s->top == -1;
}

void push(stack *s, int item)
{
  if (s == NULL)
  {
    printf("NEED TO MAKE A STACK!!\n");
    return;
  }

  if (isFull(s))
  {
    printf("ITS FULL YOU CAN'T DO THAT!!\n");
    return;
  }

  s->top++;
  s->arr[s->top] = item;
}

int pop(stack *s)
{
  if (s == NULL)
  {
    printf("No stack here!!");
    return INT_MIN;
  }

  if (isEmpty(s))
  {
    printf("STACK IS EMPTY!\n");
    return INT_MAX;
  }

  return s->arr[s->top--];
}

int peek(stack *s)
{
  if (s == NULL)
  {
    printf("No stack here!!");
    return INT_MIN;
  }

  if (isEmpty(s))
  {
    printf("STACK IS EMPTY!\n");
    return INT_MAX;
  }

  return s->arr[s->top];
}

// From Prof. Szumlanski
void printStack(stack *s)
{
  int i;
  printf("\n");
  if (s == NULL)
  {
    printf("   (no stack)\n");
    return;
  }
  if (isEmpty(s))
  {
    printf("   (stack is empty)\n");
    return;
  }
  for (i = s->cap - 1; i >= 0; i--)
  {
    printf("   |  %-4d  |%s\n", s->arr[i], (i == s->top ? " <-- top" : ""));
    printf("   +--------+\n");
  }
}

int main(void)
{
  stack *s = createStack(4);
  push(s, 5);
  push(s, 6);
  push(s, 7);
  push(s, 8);
  printStack(s);
  printf("Popped Value: %d\n", pop(s));
  printStack(s);
  push(s, 9);
  printStack(s);

  freeStack(s);

  return 0;
}