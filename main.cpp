#include <iostream>
#include "sorting.hpp"
#include <vector>

using namespace std;

int main ()
{
    srand(time(NULL));
    Sorting array1(10);

    array1.writeArray();

    array1.combSort();

    array1.writeArray();
}
