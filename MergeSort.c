#include <stdio.h>
#include <stdlib.h>

int arr[20]; // array to be sorted

int merge(int arr[], int low, int mid, int hi)
{
  int arr1[10], arr2[10]; // Two temporary arrays to hold the two arrays to be merged

  // Size of array
  int n1, n2, i, j, k;
  n1 = mid - low + 1;
  n2 = hi - mid;

  // Temp arrays
  for (i = 0; i < n1; i++)
    arr1[i] = arr[low + i];

  for (j = 0; j < n2; j++)
    arr2[j] = arr[mid + j + 1];

  arr1[i] = 9999; // To mark the end of each temporary array
  arr2[j] = 9999;

  i = 0;
  j = 0;

  // Process of combining two sorted arrays
  for (k = low; k <= hi; k++)
  {
    if (arr1[i] <= arr2[j])
    {
      arr[k] = arr1[i];
      i++;
    }
    else
    {
      arr[k] = arr2[j++];
    }
  }

  return 0;
}

int merge_sort(int arr[], int low, int high)
{
  int mid;
  if (low < high)
  {
    mid = (low + high) / 2;
    // Divide and Conquer
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    // Combine
    merge(arr, low, mid, high);
  }

  return 0;
}

int main()
{
  int n, i;

  printf("Enter the size of array\n"); // input the elements
  scanf("%d", &n);
  printf("Enter the elements:");
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  merge_sort(arr, 0, n - 1); // sort the array

  printf("Sorted array:"); // print sorted array
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}
