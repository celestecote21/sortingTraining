#include <iostream>
#include "sorting.hpp"
#include <vector>

using namespace std;

int main ()
{
    srand(time(NULL));
    Sorting array1(250);

    array1.writeArray();

    array1.bubbleSorting();

    array1.writeArray();
}
