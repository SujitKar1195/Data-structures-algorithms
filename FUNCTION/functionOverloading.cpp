/*

function overloading:  if we have functions with the same name but different parameter or different datatype,then it call functio overloading.
In c++ ,it automatically understand.

*/

#include <bits/stdc++.h>
using namespace std;

int sum(int x,int y){
    return x+y;
}
int sum(int x,int y,int z){
    return x+y+z;
}

float sum(float x,float y){
    return x+y;
}

int main()
{
    int a,b,c,d;
    cout<<"Enter 2 numbers : ";    //here you can see we use same function thrice but it doesnot through an error due to different parameter and different dataType.
    cin>>a>>b;
    c = sum(a,b);
    d = sum(a,b,c);
    cout<<d<<endl;

    float i= 3.2f,j= 3.4f;
    cout<<sum(i,j);


    return 0;
}