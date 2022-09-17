#include <bits/stdc++.h>
using namespace std;

int sum(int x,int y){
    return x+y;
}

int difference(int x,int y){
    return x-y;
}
int mul(int x,int y){
    return x*y;
}
int divi(int x,int y){
    return x/y;
}
int rem(int x,int y){
    return x%y;
}
int power(int x,int y){
    return pow(x,y);
}

int main()
{
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    int b ;
    cout<<"Enter another number: "<<endl;
    cin>>b;

    cout<<"sum of "<<a<<" and "<<b<<" is  => "<<sum(a,b)<<endl<<endl;;   
    cout<<"difference of "<<a<<" and "<<b<<" is  => "<<difference(a,b)<<endl<<endl;;   
    cout<<"multiplication of "<<a<<" and "<<b<<" is  => "<<mul(a,b)<<endl<<endl;;   
    cout<<"division of "<<a<<" and "<<b<<" is => "<<divi(a,b)<<endl<<endl;;   
    cout<<"remainder of "<<a<<" and "<<b<<" is  => "<<rem(a,b)<<endl<<endl;;   
    cout<<a<<" to the power "<<b<< " is  => "<<power(a,b)<<endl<<endl;;



    return 0;
}