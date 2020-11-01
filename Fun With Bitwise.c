#include "stdio.h"

// Number is 27 or 11011 in binary

// Write a function that says if the 2 bit is 1 or 0
// If 2 bit is turned on, return 1. Otherwise return 0;
int twoBit(int n)
{
  if ((n & 8) == 8)
  {
    return 1;
  }
  else
    return 0;
}

int main(void)
{
  int x = 23;
  x = twoBit(x);
  printf("%d\n", x);
  return 0;
}
