#include <bits/stdc++.h>
using namespace std;


/*
1) when first maxx function calls,then template T become int .When float dataType maxx function calls,then Template T become float.
*/

template<class T>

T maxx(T x,T y){
    return x>y?x:y;
}

int main()
{
    int c = maxx(10,12);
    float d= maxx(10.1f,23.45f);
    cout<<c<<" "<<d<<endl;


    return 0;
}