#include <stdio.h>

// 2 parts of a recursive function:
// 1) Base Case
// 2) Recursive call

// Returns the sum of numbers 1 through n
int sum_recursive(int n)
{
  if (n == 1)
    return 1;

  return n + sum_recursive(n - 1);
}

int mult(int n)
{
   if (n == 0)
    return 0;

  if (n == 1)
    return 1;

  return n * mult(n - 1);

}

// Returns the fibonnaci number at the given index n
int fib(int n)
{
  if (n == 0)
    return 0;
  if (n == 1 || n == 2)
    return 1;

  return fib(n-1) + fib(n-2);
}

// Returns the maximum of the 2 numbers passed
int max(int a, int b)
{
  if (a > b)
    return a;
  return b;
}

int find_max(int *array, int len)
{
  if (len == 1)
    return array[0];
  return max(array[len - 1], find_max(array, len - 1));

}

// Returns the fibonnaci number at the given index n
int fib(int n)
{
  if (n == 0 || n == 1)
    return 1;

  return fib(n-2) + fib(n-1);
}

*/

int main(void) {

  printf("Hello World\n");
  int x = fib(9);
  printf("%d", x);
  return 0;
}
