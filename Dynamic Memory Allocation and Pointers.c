#include <stdio.h>

// Takes the addresses of two numbers and swaps the values
void swap(int *ptr1, int *ptr2)
{
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

int main() {

  // Code for swap function
  int x = 1, y = 2;
  printf("The value of x is %d and y is %d.\n", x, y);

  swap(&x, &y);
  // x = 2, y = 1
  printf("The value of x is %d and y is %d.\n", x, y);


/*
  // Declare integer variable and call it num
  int num = 5;

  // Create a variable that can store the address of 'num'
  int *pointer;

  pointer = &num;

  printf("1: %d\n", num); // 5
  printf("2: %p\n", &num); // 0x7
  printf("3: %p\n", pointer); // 0x7
  printf("4: %d\n", &pointer); // 0x4
*/
/* ************************************************** */
/*
  int num1, num2, num3;
  int *pointer1, *pointer2, *pointer3;

// Practice Problems

int x = 30;
int *y = &x;
int *random = ______________;
*/


  return 0;
}
