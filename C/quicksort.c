#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
#include "quickSort.h"

void quickSort(int* pArray, int start, int end, const int a)
{

    if ((end - start) < 2 || end > a || start < 0)
        return;
    int index = division(pArray, start, end);
    printf("%d  %d  \n", start, end);
    printArray(pArray, 5);
    quickSort(pArray, index - 1, end, a);
    printArray(pArray, 5);
    sleep(1);
    quickSort(pArray, start, index + 1, a);
    
}


int division(int* pArray, int start, int end)
{
    int const pivot = pArray[end];
    int indexPivot = start;
    //printArray(pArray, 10);
    for(int  i = start; i <= end; i++)
    {
        
        if(pArray[i] < pivot)
        {
            changeInArray(pArray, indexPivot, i + 1);
            indexPivot ++;
        }
        
    }
    
    changeInArray(pArray, indexPivot, end);
    //printf("%d \n", indexPivot);
    return end - indexPivot;
    
 
}

void quicksort2(int *A, int len) {
  if (len < 2) return;
 
  int pivot = A[len / 2];
 
  int i, j;
  for (i = 0, j = len - 1; ; i++, j--) {
    while (A[i] < pivot) i++;
    while (A[j] > pivot) j--;
 
    if (i >= j) break;
 // swap
    int temp = A[i];
    A[i]     = A[j];
    A[j]     = temp;
  }
 
  quicksort2(A, i);
  quicksort2(A + i, len - i);
}