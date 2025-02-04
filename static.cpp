#include <iostream>
using namespace std;

class Counter
{
private:
    int nostat;
    static int TotalCount;

public:
    Counter()
    {
        nostat = 0;
        TotalCount++;
    }

    int increament()
    {
        nostat++;
    }
    int get_NO()
    {
        return nostat;
    }
    static int getStat()
    {
        return TotalCount;
    }
   
};

int Counter::TotalCount = 0;
int main()
{
    Counter A, B, C;
    A.increament();
    B.increament();
    B.increament();

    cout << "count for class A is " << A.get_NO() << endl;
    cout << "count for class B is " << B.get_NO() << endl;
    cout << "count for class C is " << C.get_NO() << endl;

    cout << "Total no. of objects created is " << Counter::getStat() << endl;
}