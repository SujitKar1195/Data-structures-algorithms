/*
    Author: Sujit Kar
    Date:26/02/2023
    Topic:Vector -> at function
*/
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>&v)
{
     for(auto i:v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v(5);
    for(int i=0;i<5;i++)    
        v.at(i) = i + 1;
    
    print(v);
    return 0;
}


