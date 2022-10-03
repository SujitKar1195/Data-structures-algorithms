#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the size of an array"<<endl;
    cin>>m;
    int a[m];
    cout<<"Enter array elements "<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int diff = a[0];
    for(int i=0;i<m;i++)
    {
        if((a[i]-i)!=diff){
            cout<<"The missing number is "<<a[i]-1<<endl;
            break;
        }
    }


    return 0;
}