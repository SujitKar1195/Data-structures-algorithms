#include <bits/stdc++.h>
using namespace std;

int maximum(int x, int y ,int z){
    int m = max(x,max(y,z));
    return m;
}

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers : "<<endl;
    cin>>a>>b>>c;
    cout<<maximum(a,b,c)<<endl;


    return 0;
}