#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int>&v)
{
    cout<<"Result: "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
}
int main()
{
    int n;
    cout<<"Enter vector size: ";
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        int size;
        cout<<"Enter vector of vector size: ";
        cin>>size;
        vector<int> temp;

        for(int j=0;j<size;j++)
        {
            int x;
            cout<<"Enter element\n";
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);

    }

    for(int i=0;i<v.size();i++)
    {
        printVec(v[i]);
    }


    return 0;
}