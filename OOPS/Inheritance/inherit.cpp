#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
        int x;
        void show(){
            cout<<x<<endl;
        }
};

class Child : public Parent{
    public:
        int y;
        void display(){
            cout<<x<<" "<<y<<endl;          //Child class can inherit Parent class by using ':' 
        }
};

int main()
{
    /*Carefully see the output*/

    Parent m;
    m.x=12;
    m.show();
    Child C;
    C.x = 10;
    C.y = 24;
    C.display();



    return 0;
}