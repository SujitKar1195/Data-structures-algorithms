#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void printVec(vector<pair<int,int>>&v)
{
    cout<<"Vector of Pairs  value: \n";
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }


}

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cout<<"Enter first and second value: ";
        cin>>x>>y;
        v.push_back(make_pair(x,y));

    }

    printVec(v);


    return 0;
}