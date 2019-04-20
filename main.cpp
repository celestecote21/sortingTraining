#include <iostream>
#include "sorting.hpp"
#include <vector>

using namespace std;

int main ()
{
    srand(time(NULL));
    Sorting array1(250);
    
    //array1.writeArray();

    array1.combSort();
    cout << array1.getNbChange() << endl;
    array1.blendArray();

    array1.bubbleSorting();
    cout << array1.getNbChange() << endl;
    //array1.writeArray();
}
