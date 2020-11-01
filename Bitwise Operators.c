#include "stdio.h"

// Checking
int isFourthBitOn(int n)
{
  return (n & 4) == 4;
}

// Changing bits
int turnFourthBitOn(int n)
{
  return n | 4;
}

// Toggle on/off
int toggleFourthBitOn(int n)
{
  return n ^ 4;
}
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

// Given a number, return the number of bits that are turned on
int countBits(int n)
{
  int counter = 0;
  while (n > 0)
  {
    if (n & 1)
      counter++;
    n >>= 1;
  }
  return counter;
}

// FE FALL 2019
int bestMatch(int client, int *matches, int length)
{
  int i, bestScore = -1, indexOfBestScore = 0;

  for (i = 0; i < length; i++)
  {
    int currentScore = 5 - countBits(client ^ matches[i]);
    if (currentScore > bestScore)
    {
      bestScore = currentScore;
      indexOfBestScore = i;
    }
  }
  return indexOfBestScore;
}

int lowestOneBit(int n)
{
  int shift = 1;

  while ((shift & n) == 0)
    shift <<= 1;

  return shift;
}

int highestOnebit(int n)
{
  int shift = 1;

  int shift2 = 1000000000;

  while (shift2 > 0)
  {
    printf("Shift2: %d\n", shift2);
    printf("Shift2 & n: %d\n", shift2 & n);

    if ((n & shift2) != 0)
      return shift2;
    shift2 >>= 1;
  }
  return 0;
}

int main(void)
{
  int x = 23;
  printf("%d\n", twoBit(x));
  printf("CountBits of 13: %d\n", countBits(13));

  return 0;
}
