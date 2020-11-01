#include "stdio.h"
#include "string.h"

int hash(int number)
{
  return number % 10;
}

int main(void)
{

  int x;

  hash(12);
  hash(5809);
  hash(80);
  hash(43);
  hash(52);

  return 0;
}
