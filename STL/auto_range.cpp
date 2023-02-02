#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {1,2,3,4,5,6};
    for(auto &i:v)
        cout<<i<<" ";
    cout<<endl;
    

    // //vector pair
    vector<pair<int,int>>v_p= {{1,2},{3,4},{5,6}};

    for(auto &it:v_p)
        cout<<it.first<<" "<<it.second<<endl;
    

    return 0;
}