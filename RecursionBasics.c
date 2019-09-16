#include <stdio.h>

// Multiplies a and b together using recursion
int mult(int a, int b)
{
  if(b == 0)
    return 0;

  else
    return a + mult(a, b - 1);
}

int main(void) {

  return 0;
}
