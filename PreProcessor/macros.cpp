#include <bits/stdc++.h>
using namespace std;

//below are the macros

#define PI 3.14

//  if there are no any other PI then PI=3.14  || if there has also a PI then=>  PI = 3

#ifndef PI
    #define PI 3
#endif

#define sqr(x) (x*x)
#define c cout
#define sq(x) #x   //make x to string


int main()
{
    c<<PI<<endl;
    c<<sqr(6)<<endl;
    c<<sq(welcome to the coding world);
    /*
        output:=>
            3.14 => if no another PI OR 3 => if there  are another PI
        
            36
            welcome to the coding world
    
    
    
    */

    return 0;
}