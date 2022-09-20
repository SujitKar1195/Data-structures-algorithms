#include <bits/stdc++.h>
using namespace std;

/*
    If there are many function with the same name we need namespace
*/

namespace First
{
    void func()
    {
        cout<<"first function\n";
    }
}


namespace Second
{
    void func()
    {
        cout<<"second function\n";
    }
}


int main()
{
    //If we want to call first funcion then =>
    First::func();   // or just => "using namespace First" as global like using namespace std. after when you call  func() ,it will call first funcion. If you want to call second func(),Second::func()

    Second::func();


    return 0;
}