/* This program has a variety of functions that are very similar, but
the Big O runtime varies. I created it to show students how to figure
out the runtime of a function by inspecting how many times each line 
code runs */

#include <stdio.h>
#include <math.h>

/* Runtime: O(1) */
int function1(int n)
{
  return 5;
}

// n = 20
int function2(int n)
{
  int i, counter = 0; // 1 time

  for (i = 0; i < n; i++) // n times
    counter++;            // n times

  return counter; // 1 time
}
// 1+1+n+n+1 --> n+n+3 --> O(2n)-->O(n)
// Runtime: O(n)

// n = 20
int function3(int n)
{
  int i, counter = 0; // 1 time

  for (i = 0; i < 100; i++) // 100 times
    counter++;              // 100 times

  return counter; // 1 time
}
//	1+100+100+1 --> 202 --> O(1)
// Runtime: O(1)

// n = 20
int function4(int n)
{
  int i, counter = 0; // 1 time

  for (i = 0; i < 5 * n; i++) // 5*n times
    counter++;                // 5*n times

  return counter; // 1 time
}
//	1+5n+5n+1 --> 10n+2 --> O(n)
// Runtime: O(n^2)

// n = 10
int function5(int n)
{
  int i, counter;             // 1 time
  for (i = 0; i < n * n; i++) // n*n times
    counter++;                // n*n times

  return 5; // 1 time
}
// 	1+ n*n + n*n +1 --> 2n*n +2 --> O(n*n)
//	Runtime: O(n^2)

// n = 20
int function6(int n)
{
  int i, counter;         // 1 time
  for (i = 0; i < n; i++) // n times
    counter++;            // n times

  for (i = 0; i < n; i++) // n times
    counter++;            // n times

  return counter; // 1 time
}

// n = 20
int function7(int n)
{
  int i, counter;         // 1 time
  for (i = 0; i < n; i++) // n times
    counter++;            // n times

  for (i = 0; i < n * n; i++) // n*n times
    counter++;                // n*n times

  return counter; // 1 time
}

// When nested, multiply the amount of times each loop runs
// Ex in this function: line 92 runs n times, line 93 runs n times, so total runtime is n*n = O(n^2)
// n = 3
int function8(int n)
{
  int i, j, counter;        // 1 time
  for (i = 0; i < n; i++)   // n times
    for (j = 0; j < n; j++) // n*n times
      counter++;            // n*n times

  return counter; // 1 time
}

int function9(int n)
{
  int i, j, counter;        // 1 time
  for (i = 0; i < 50; i++)  // 50 times
    for (j = 0; j < n; j++) // n times
      counter++;            // n times

  return counter; // 1 time
}

int function10(int n)
{
  int i, j, k, counter;               // 1 time
  for (i = 0; i < n; i++)             // n times
    for (j = 0; j < n * n; j++)       // n*n times
      for (k = 0; k < pow(2, n); k++) // 2^n
        counter++;                    // n*n times

  return counter; // 1 time
}
// Runtime: O( (2^n)(n^3) )

// n = 128
int function11(int n) // n = 128
{
  int i = n, x = 0; //  1 time

  while (i > 0) //  8 times
  {
    i = i / 2; //  8 times
    x++;       //  8 times
  }
  return n; //  1 time
}
// Runtime: O(log(n))

int function12(int n)
{
  int i, counter;             // 1 time
  for (i = 0; i < n; i++)     // n  times
    counter += function11(n); // n times

  return counter; // 1 time
}
// Runtime: O(n*log(n))

int main(void)
{
  printf("Hello World\n");
  return 0;
}
