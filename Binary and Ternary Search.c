#include <stdio.h>

// Returns index of the array where our number is found
int binarySearch(int arr[], int low, int hi, int num)
{
  if (hi >= 1)
  // All other cases
  {
    {
      int mid = low + (hi - low) / 2;

      if (arr[mid] > num)
        return binarySearch(arr, low , mid-1 , num);
      else if (arr[mid] < num)
        return binarySearch(arr, mid + 1, hi, num);
      else
        return mid;
    }
  }
  else
    return -1;
}

// Returns index of array where our number is found using ternary
int ternarySearch(int arr[], int low, int hi, int num)
{
  if(hi>=low)
  {
    int mid1 = low + (hi-low)/3;
    int mid2 = hi -  (hi-low)/3;

    if(arr[mid1] == num)
      return mid1;
    if(arr[mid2] == num)
      return mid2;
    if (num < arr[mid1] )
      return ternarySearch(arr, low, mid1 - 1, num);
    else if (num > arr[mid2] )
      return ternarySearch(arr, mid2 + 1 , hi, num);
    else
      return ternarySearch(arr, mid1 + 1, mid2 - 1, num);
  }
  else
    return -1;
}

int main(void) {

  int arr[] = { 8, 13, 40, 41, 49, 52, 57, 60, 63};
  int num = 60;

  // Test for Binary Search
  int result = binarySearch(arr, 0, 9, num);
  printf("Result is %d\n", result);

  // Test for Ternary Search
  num = 49;
  result = ternarySearch(arr, 0, 9, num);
  printf("Result is %d\n", result);
  return 0;
}
