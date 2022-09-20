#include <bits/stdc++.h>
using namespace std;

class Test
{
    public:
        Test()
        {
            cout<<"test is created\n";
        }
        ~Test()
        {
            cout<<"test is destroyed\n";
        }
};


int main()
{
    Test t;
    /*
        o/p:
            test is created
            test is destroyed
    */


    return 0;
}