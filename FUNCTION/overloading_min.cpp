#include<bits/stdc++.h>
using namespace std;


int Min(int a,int b){
    return min(a,b);
}
int Min(int a,int b,int c){
    return min(a,min(b,c));
}
float Min(float a,float b){
    return min(a,b);
}

int Main()
{
    cout<<Min(10,5);
    cout<<Min(12,7,9);
    cout<<Min(18.0f,9.0f);
}
