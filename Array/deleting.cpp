#include <bits/stdc++.h>
using namespace std;

void deleting(int *a,int size,int pos)
{
    for(int i=pos;i<size-1;i++)
    {
        a[i] = a[i+1];
    }


}

int main()
{
    int n;
    cout<<"Enter size of an arary : ";
    cin>>n;
    int a[n];
    cout<<"Enter elemens :  ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int index;
    cout<<"Enter index: ";
    cin>>index;
    deleting(a,n,index);

    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }

    /*
    output:
    Enter size of an arary : 10
    Enter elemens :  1
    2
    3
    4
    5
    6
    7
    8
    89
    10
    Enter index: 8
    1 2 3 4 5 6 7 8 10 
    
    
    */


    return 0;
}