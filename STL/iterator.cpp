#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    vector<int>v = {1,2,3,4,5,6};
    vector<int>::iterator it;
    for(it =v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    

    //vector pair
    vector<pair<int,int>>v_p= {{1,2},{3,4},{5,6}};
    vector<pair<int,int>>::iterator i;
    for(i=v_p.begin();i!=v_p.end();i++)
    {
        cout<<i->first<<" "<<i->second;  //use=> ->/(*t)first
    }
    cout<<endl;
    for(i=v_p.begin();i!=v_p.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second;  
    }
    cout<<endl;

    return 0;
}
