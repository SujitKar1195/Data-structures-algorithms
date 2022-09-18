#include <bits/stdc++.h>
using namespace std;

/*
default argument is very useful for more or less paramater passing but we will create one function that will handle all parameter passing values.
so that we need default  argument, for default argument we have to create an optional argument in function as equal to zero from right to left wihtout any skip.


*/

int max(int a=0,int b=0,int c=0){
    return a>b && a>c ? a:(b>c?b:c);
}

int main()
{
    cout<<max()<<endl;
    cout<<max(12)<<endl;
    cout<<max(12,10)<<endl;
    cout<<max(10,11,12)<<endl;


    return 0;
}