#include <iostream>

using namespace std;

class area_ex
{
    private:
        int length, width;
    public:
        area_ex(int n1 = 5; int n2 = 2){length = n1; with = n2;} //parameters for default values
};

int main()
{
    ex t1[3];
    t1[1] = {2, 3}; //overrides the defaults values of the constructor
    //these values are sent to the constructor
    ex t2[3] = {(2, 3), (4, 5), (6, 7)}; //another way of giving it initial values, those are given to the constructor

}
