/*
    Author: Sujit Kar
    Date:26/02/2023
    Topic:Vector -> assign funtion
    Time complexity: Logarithmic time
*/
#include <iostream>
#include <vector>
using namespace std;


void answer(vector<int>&v)
{
    cout << "Size "<< v.size() << endl;  // 5
    cout << "Elements are : "<<endl;
    for(auto i:v)
        cout << i << " "; // 23 23 23 23 23 
    cout << endl;
    cout <<endl;
}

int main()
{
    //vector initialization
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;


    v1.assign(5,23);
    answer(v1);


    vector<int>::iterator it;
    it = v1.begin() + 1;
    v2.assign(it,v1.end()-1);
    answer(v2);


    int a[3] = {1,2,3};
    v3.assign(a,a+3);
    answer(v3);







    return 0;
}