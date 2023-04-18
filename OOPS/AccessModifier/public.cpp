#include <iostream>
using namespace std;

/*
There are three types of access modifiers:
    1.Private
    2.Protected
    3.Public
    By Default in a class , private access modifier is applied
    it means if we didn't specify any modifier then automatically it would be private ;
*/

const float PI = 3.14159;

class Circle
{
    // By default private
    // public:
public:
    // Funtions,data members those whoever lies under the public section can be accessed by outside class
    float radius;
    Circle(float r)
    {
        radius = r;
    }

    float area()
    {
        return PI * PI * radius;
    }
};

int main()
{
    float r;
    cout<<"Enter radius value : ";
    cin >> r;
    Circle c1(r);
    cout << "Radius : " << c1.radius << endl; // accessing public member;
    cout << "Area : " << c1.area() << endl;
}