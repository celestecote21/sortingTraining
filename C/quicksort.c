#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
#include "quickSort.h"

void quickSort(int* pArray, int start, int end)
{

    if ((end - start) < 2)
        return;
    int index = division(pArray, start, end);
    printf("%d  %d  \n", start, end);
    printArray(pArray, 5);
    quickSort(pArray, index - 1, end);
    printArray(pArray, 5);
    sleep(1);
    quickSort(pArray, start, index + 1);
    
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