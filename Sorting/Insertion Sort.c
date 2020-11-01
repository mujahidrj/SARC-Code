#include <stdio.h>

void printArray(int arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  printf("\n");
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Inserts each element in a sorted partition
void insertionSort(int arr[], int n)
{
  int i, j, key;
  for (i = 1; i < n; i++)
  {
    // Setting key to first index that comes after the sorted partition
    key = arr[i];

    // Scooch all the elements necessary to make space for the key
    for (j = i - 1; j >= 0 && arr[j] > key; j--)
    {
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = key;
  }
}

int main(void)
{
  int arr[] = {9, 8, 17, 6, 5};
  int arr2[] = {5, 4, 3, 2, 1};
  int arr3[] = {1, 2, 3, 4, 5};
  int n = 5;
  printArray(arr, n);
  insertionSort(arr, n);
  printArray(arr, n);
  return 0;
}