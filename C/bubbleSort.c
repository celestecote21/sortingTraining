#include "sorting.h"

int bubbleSort(int* pArray, int nbColum)
{
    int modif = 0;
    int a = 0;
    static int nbChan;
    Result resultat;
    resultat.chTab = 0;
    resultat.frame = 0;

    do{
        modif = 0;
        for(a = 0; a < nbColum - 1  ; a++)
        {
            if(*(pArray +a) > *(pArray + a + 1))
            {
                nbChan ++;
                changeInArray(pArray, a, a + 1);
                modif = 1;
                
            }
        }
        
    }while(modif == 1);
    printf("%d \n", nbChan);
    printArray(pArray, nbColum);
    return 1;


}

int bubbleSort2(int* pArray, int nbColum)
{
    int modif = 0;
    int a = 0;
    static int nbChan;
    Result resultat;
    resultat.chTab = 0;
    resultat.frame = 0;

    do{
        modif = 0;
        for(a = 0; a < nbColum - 1  ; a++)
        {
            if(*(pArray +a) > *(pArray + a + 1))
            {
                nbChan ++;
                changeInArray(pArray, a, a + 1);
                modif = 1;
                a++;
            }
        }
        
    }while(modif == 1);
    printf("%d \n", nbChan);
    printArray(pArray, nbColum);
    return 1;


}