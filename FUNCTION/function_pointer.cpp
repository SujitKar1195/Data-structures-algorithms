#include <bits/stdc++.h>
using namespace std;

int Max(int x,int y){
    return x>y?x:y;
}
int Min(int x,int y){
    return x<y?x:y;
}

int main()
{
    int (*fp)(int,int); //function pointer declaration
    fp = Max;  //function pointer initialization with Max function
    cout<<(*fp)(12,23)<<endl;   //Max function will be called with passing value 12 and 23;

    fp = Min;   //function pointer initialization with Min function
    cout<<(*fp)(12,23)<<endl;



    return 0;
}