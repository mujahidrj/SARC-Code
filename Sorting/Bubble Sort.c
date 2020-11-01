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

// With bubbleSort, after i iterations, the last "i" elements will be sorted
void bubbleSort(int arr[], int n)
{
  int i, j;

  for (i = 0; i < n - 1; i++)
    for (j = 0; j < n - 1 - i; j++)
      if (arr[j] > arr[j + 1])
        swap(&arr[j], &arr[j + 1]);
}

int main(void)
{
  int arr[] = {9, 8, 17, 6, 5};
  int arr2[] = {5, 4, 3, 2, 1};
  int arr3[] = {1, 2, 3, 4, 5};
  int n = 5;
  printArray(arr, n);
  bubbleSort(arr, n);
  printArray(arr, n);
  return 0;
}