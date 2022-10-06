#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size\n";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int lastDuplicate = 0;
    cout<<"Duplicate numbers are \n";
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1] && a[i]!=lastDuplicate)
        {
            cout<<a[i]<<endl;
            lastDuplicate = a[i];
        }
    }

    return 0;
}