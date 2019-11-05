#include <stdio.h>

void print(int array[][])
{
  int i, j;
  for (i = 0; i<row; i++){
    for(j = 0; j<col; j++)
    {
      
      if (i == 2 && j == 2)
      {
        printf("%d", array[i][j]);
      }
      else
      {
        printf("%d, ", array[i][j]);
      }
      
   }
  }
  
}

int main(void) {
  /*
  int vname[][]= {{1,2,3},
                  {4,5,6},
                  {7,8,9}};
  
  print(vname, 3, 3);
  */

  int **doublearray = calloc(9, sizeof(int*));
  int i;
  for (i = 0; i < 10; i++)
  {
    doublearray[i] = calloc(5, sizeof(int));
  }


  return 0;

  
}
