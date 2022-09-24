#include <bits/stdc++.h>
using namespace std;

void inserting(int *a,int n,int pos,int k)
{
    for(int i=n;i>=pos;i--)
    {
        a[i] = a[i-1];
    }

    a[pos] = k;

}

int main()
{
    int a[100];
    cout<<"Enter 10 elements in an array";
    int n=10;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int pos,k;
    cout<<"enter index : ";
    cin>>pos;
    cout<<"Enter element : ";
    cin>>k;

    inserting(a,n,pos,k);

    cout<<"new array : ";
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}