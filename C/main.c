#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
#include <time.h>
#include "bubbleSort.h"
#include "quickSort.h"


/* 
probleme dans l'echangement des variables
*/

int main()
{ 
    srand(time(NULL));
    int* pArray;
    int nbColum = 21;
    int limite;
    pArray = malloc(sizeof(int)*(nbColum+1));
    initArray(pArray, nbColum);
    blendArray(pArray, nbColum);
    
    quickSort(pArray, 0, nbColum - 1);

    printArray(pArray, nbColum);

    return 1;
}