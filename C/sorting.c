#include <stdio.h>
#include <time.h>
#include "sorting.h"



void initArray(int* pArray, int nbColum)
{
    for(int i = 0; i < nbColum; i++)
    {
       *(pArray + i) = i;
    }
    
}

void blendArray(int* pArray, int nbColum)
{
    
    int case1, case2;
    srand(time(NULL));

    for(int i = 0; i < 500; i++)
    {
        case1 = rand()%(nbColum);
        case2 = rand()%(nbColum);
        changeInArray(pArray, case1, case2);
    }
    printArray(pArray, nbColum);
}


void changeInArray(int* pArray, int  case1, int case2)
{
    int temp;
    /*printf("before");
    printArray(pArray, 10);*/
    temp = *(pArray + case1);
    *(pArray + case1) = *(pArray + case2);
    *(pArray + case2) = temp;
   /* printf("after ");
    printArray(pArray, 10);*/
}


void printArray(int* pArray, int nbColum)
{
    for(int i = 0; i < nbColum; i++)
    {
        printf("%d ", *(pArray + i));
    }
    printf("\n");
}



