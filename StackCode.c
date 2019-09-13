#include <stdio.h>
#include <stdlib.h>

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


int main(void) {
  stack *ptr;
  ptr = createStack(100);

  printf("Hello World\n");
  return 0;
}
