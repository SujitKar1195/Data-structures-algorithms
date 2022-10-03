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
    int sum=0;
    for(int i=0;i<m;i++)
    {
        sum+=a[i];
    }

    int s = (a[m-1])*(a[m-1] +1 )/2;
    cout<<s-sum<<endl;



    return 0;
}