#include <iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;
    public:
        Complex(int r=0,int i=0)
        {
            real = r;
            img = i;
        }

        Complex add(Complex x)
        {
            Complex temp;
            temp.real = real + x.real;
            temp.img = img + x.img;
            return temp;
        } 
        Complex operator +(Complex &c1)
        {
            Complex c;
            c.real = real + c1.real;
            c.img = img + c1.img;
            return c;
        }

        void showData()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
};

int main()
{
    Complex c1(2,3);
    Complex c2(4,5);
    Complex c3;
    // we can use any of two of these operation
    c3 = c1 + c2; 
    c3 = c1.add(c2);
    //showing data
    c3.showData();

    return 0;
}