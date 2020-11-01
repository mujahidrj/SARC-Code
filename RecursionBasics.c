#include <stdio.h>

// Multiplies a and b together using recursion
int mult(int a, int b)
{
  if (b == 0)
    return 0;

  else
    return a + mult(a, b - 1);
}

int main(void)
{
  printf("5 times 6 = %d\n", mult(5, 6));
  return 0;
}
