#include "sorting.h"

int bubbleSort(int* pArray, int nbColum)
{
    int modif = 0;
    int a = 0;
    Result resultat;
    resultat.chTab = 0;
    resultat.frame = 0;

    do{
        modif = 0;
        for(a = 0; a < 9; a++)
        {
            if(pArray[a] < pArray[a + 1])
            {
                printArray(pArray, 10);
                changeInArray(pArray, a, a + 1);
                modif = 1;
                printf("i : %d   , %d     i+1: %d     ,  %d\n", a, pArray[a],  a +1, pArray[a+1]);
                printArray(pArray, 10);
            }
        }
        
    }while(modif == 1);
    printArray(pArray, nbColum);
    return 1;


}