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
    int nbColum = 250;
    int limite;
    pArray = malloc(sizeof(int)*(nbColum+1));
    initArray(pArray, nbColum);
    blendArray(pArray, nbColum);
    
    
    bubbleSort2(pArray, nbColum);

}