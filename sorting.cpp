#include "sorting.hpp"
#include <vector>
#include <iostream>
#include <time.h>

using namespace std;

Sorting::Sorting(int nb) : m_nb(nb), m_nbChan(0)
{
    for(int  i = 0; i < nb; i++)
    {
        m_pArray.push_back(i);
    }
    blendArray();
    
}

Sorting::~Sorting()
{
}






void Sorting::writeArray()
{
    for(int  i = 0; i < m_nb; i++)
    {
        cout << m_pArray[i] << " ";
    }
    cout << endl;
    cout << m_nbChan << endl;
}


void Sorting::blendArray()
{
    int place1, place2;
    place1 = rand()%(m_nb);
    place2 = rand()%(m_nb);
    for(int  i = 0; i < 500; i++)
    {
        changeInArray(place1, place2);
        place1 = rand()%(m_nb);
        place2 = rand()%(m_nb);
    }
    
}



void Sorting::changeInArray(int place1, int place2)
{
    int temp(m_pArray[place1]);
    m_pArray[place1] = m_pArray[place2];
    m_pArray[place2] = temp; 

}


void Sorting::bubbleSorting()
{
    bool modif(true);

    while(modif){
        modif = false;
        for(int i = 0; i < m_nb - 1; i++)
        {
            if (m_pArray[i] > m_pArray[i + 1])
            {
                changeInArray(i, i + 1);
                modif = true;
                //i++;
                m_nbChan++;
            }
        }
        
    }
    
}