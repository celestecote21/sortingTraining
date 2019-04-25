#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
#include "quickSort.h"

void quickSort(int* pArray, int start, int end)
{

    if (start >= end)
        return;
    int index = division(pArray, start, end);
    printf("%d  %d  \n", start, end);
    quickSort(pArray, index - 1, end);
    quickSort(pArray, start, index + 1);
}


int division(int* pArray, int start, int end)
{
    int const pivot = pArray[end];
    int indexPivot = start;
    //printArray(pArray, 10);
    for(int  i = start; i <= end + 1; i++)
    {
        
        if(pArray[i] <= pivot)
        {
            changeInArray(pArray, indexPivot, i);
            indexPivot ++;
        }
        
    }
    
    changeInArray(pArray, indexPivot, end);
    //printf("%d \n", indexPivot);
    return indexPivot;
    
 
}