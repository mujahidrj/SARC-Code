#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

// Does 1 iteration of quicksort and returns the index of the pivot in it's correct position
int partition(int *arr, int low, int high)
{
  int pivot = low;

  int leftPointer = low + 1, rightPointer = high;

  // Keeps on going until leftPointer and rightPointer have crossed over
  while (leftPointer < rightPointer)
  {
    // Increments leftPointer until it finds a value > pivot
    while (arr[leftPointer] <= arr[pivot])
      leftPointer++;

    // Decrements rightPointer until it finds a value <= pivot
    while (arr[rightPointer] > arr[pivot])
      rightPointer--;

    // If leftPointer and rightPointer haven't crossed over, swap the values
    // Then, increment leftPointer and decrement rightPointer to keep on going
    if (leftPointer <= rightPointer)
    {
      swap(&arr[leftPointer], &arr[rightPointer]);
      leftPointer++;
      rightPointer--;
    }
  }

  // Once one iteration of quicksort has gone through, swap the pivot and the rightPointer
  swap(&arr[pivot], &arr[rightPointer]);

  // Returns the new index of the pivot
  return rightPointer;
}

void quicksort(int *arr, int low, int high)
{

  // if low > high, we have completed quicksort
  if (low < high)
  {
    // Calls partition once
    int indexOfPivot = partition(arr, low, high);

    // Calls quicksort recursively on the subarrays
    quicksort(arr, low, indexOfPivot - 1);
    quicksort(arr, indexOfPivot + 1, high);
  }
}

void printArray(int *arr, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}

int main(void)
{
  int arr[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
  printArray(arr, 9);
  printf("\n");
  quicksort(arr, 0, 8);
  printArray(arr, 9);
}
