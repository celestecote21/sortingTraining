#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
#include <time.h>
#include "bubbleSort.h"


/* 
probleme dans l'echangement des variables
*/

int main()
{ 
    int* pArray;
    int nbColum = 10;
    int limite;
    pArray = malloc(sizeof(int)*200);
    initArray(pArray, nbColum);
    blendArray(pArray, nbColum);
    printArray(pArray, nbColum);
    changeInArray(pArray, 3, 6);
    printArray(pArray, nbColum);
    bubbleSort(pArray, nbColum);

}