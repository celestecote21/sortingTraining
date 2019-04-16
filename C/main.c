#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
#include <time.h>

int main()
{ 
    int* pArray;
    int nbColum = 10;
    int limite;
    pArray = malloc(sizeof(int)*200);
    initArray(pArray, nbColum);
    blendArray(pArray, nbColum);
    printArray(pArray, nbColum);

}