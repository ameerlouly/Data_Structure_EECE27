#include <iostream>

using namespace std;

        /* CONSTRUTORS*/

//constructor function is a function  that works as soon as an object is created

class area
{
    private:
            int len;
            float wid;
            float area_;
    public:
            area(){len = 5; wid = 2;}   //constructor function
            void get(){cin >> len >> wid;}
            void area_calc(){area_ = len * wid;}
            void disp_area(){cout << area_ << endl;}
};


int main()
{
    area a1, a2;
    int temp;

    a1.get();
    temp = a1.area_calc();
    a1.disp_area;

    temp = a2.area_calc();
    a2.disp_area;

}
