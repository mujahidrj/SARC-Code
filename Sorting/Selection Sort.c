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

// With selectionSort, after i iterations, the first "i" elements will be sorted
void selectionSort(int arr[], int n)
{
  int i, j, indexOfMin;

  for (i = 0; i < n - 1; i++)
  {
    indexOfMin = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[indexOfMin])
        indexOfMin = j;
    }
    swap(&arr[i], &arr[indexOfMin]);
  }
}

int main(void)
{
  int arr[] = {9, 8, 17, 6, 5};
  int arr2[] = {5, 4, 3, 2, 1};
  int arr3[] = {1, 2, 3, 4, 5};
  int n = 5;
  printArray(arr, n);
  selectionSort(arr, n);
  printArray(arr, n);
  return 0;
}