#include <iostream>
using namespace std;

class area
{
    private: 
        int length,breath;

    public:

        void get_area(int l, int b){
            length = l;
            breath = b;
        }

        int calc_area(int l, int b){
            return length*breath;
        }
};

int main()
{
    int l,b;
    cout<< "enter length and breath"<< endl;
    cin >> l >> b;
    area meorb;
    meorb.get_area(l,b);
    cout<< "the area is " << meorb.calc_area(l,b) << endl;
}