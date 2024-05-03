#include <iostream>

using namespace std;

class rec
{
    int x, y;

    public:
        point(int n1 = 0, int n2 = 0) { x = n1; y = n2;}
        int calc_area{return x * y;}
};

int main()
{
    rec *rp1, *rp2, *rp3;
    rec obj(2, 3);

    rp1 = new rec(4, 5);


}
