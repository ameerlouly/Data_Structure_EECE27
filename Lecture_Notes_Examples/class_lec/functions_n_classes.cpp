#include <iostream>

using namespace std;

                        /*Dealing with Functions in Classes*/
                     // Function in classes are often called Methods

class rec{

private:
    float width;
    float length;
public:
    void setwidth(float w){width = w;};  //Funtion Defintion inside class
    void setlength(float l){length = l;};   //notice inside class i use member name directly to use it, weter public or private
    float getwidth(); //Defined outside the function
    float getlength();
    float getarea(); //Must prototype function in class before defining it outside
};

//Defining function outside class using resolution scope operator ::
float rec::getwidth(){return width;}    //Even in definitions outside class
float rec::getlength(){return length;}  //i can use private member names directly
float rec::getarea(){return width * length;}

int main()
{
rec r; //Creating Object

//accesing members of class outside class
//we use . operator like structs
r.setlength(3); r.setwidth(4);
cout << r.getarea() << endl;
cout << r.getlength() << endl;
cout << r.getwidth() << endl;
//cout << r.width << endl; ERROR: width is a private member

}
