/*
    Author: Sujit Kar
    Date: 26/02/2023
    Topic: Vector -> erase()
    Time Complexity: Linear on the number of elements erased (destructions) plus the number of elements after the last element deleted (moving).
    Space Complexity: O()
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
    vector<int>v;
    for(int i=1;i<=10;i++)
        v.push_back(i);
    
    v.erase(v.begin());
    print(v);
    v.erase(v.begin(),v.begin()+5);
    print(v);
    



   return 0;
}