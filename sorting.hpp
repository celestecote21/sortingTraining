#include <vector>

class Sorting
{
private:
    std::vector<int> m_pArray;
    int m_limite;
    int m_nb;
    int m_nbChan;
    void changeInArray(int place1, int place2);

public:
    Sorting(int nb);
    ~Sorting();

    void writeArray();
    void blendArray();
    void bubbleSorting();
    void combSort();
    int getNbChange() const;
};


