#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/******************************************************/
/*                      Stacks        	              */
/******************************************************/
typedef struct stack {
  int top;
  int size;
  int *array;
} stack;

stack *createStack(int capacity) {
  stack *newStack;

  // Dynamically allocate memory for 1 stack
  newStack = malloc(sizeof(stack) * 1);
  if ( newStack == NULL )
  {
    printf("No memory found\n");
    return NULL;
  }
  newStack->top = -1;
  newStack->size = capacity;

  newStack->array = malloc(sizeof(int) * capacity);
  if( newStack->array == NULL)
  {
    printf("No memory found for this array\n");
    free(newStack);
    return NULL;
  }

  return newStack;
}

stack *freeTheStack(stack *stackWeWantToDelete)
{
  if(stackWeWantToDelete == NULL)
  {
    printf("Ouch the stack's null\n");
    return NULL;
  }
  free(stackWeWantToDelete->array);
  free(stackWeWantToDelete);

  return NULL;
}

void push(stack *s, int num)
{
  // if there's no stack
  if(s == NULL)
  {
    printf("No stack here\n");
    return;
  }
	// if the stack is full
  if(isFull(s))
  {
    printf("Stack is full");
    return;
  }

  s->top++;
  s->elements[s->top] = num;
  return;
}

int pop(stack *s) 
{
  if(s == NULL)
  {
    printf("No stack here\n");
    return INT_MAX;     
  }

  // if the stack is empty
  if(isEmpty(s))
  {
    printf("Stack is empty");
    return INT_MIN;
  }
  
  s->top--;
  return s->elements[s->top + 1];
}

int peek(stack *s)
{
  if(isEmpty(s))
  {
    printf("Stack is empty\n");
    return INT_MIN;
  }
  return s->elements[s->top];
}

int isFull(stack *s)
{
  if(s->top == s->size - 1)
  {
    return 1;
  }
  return 0;

//  return (s->top == s->cap - 1);
}

int isEmpty(stack *s) 
{
  return (s->top == -1);
}


int main(void) {
  stack *ptr;
  ptr = createStack(100);

  printf("Hello World\n");
  return 0;
}
