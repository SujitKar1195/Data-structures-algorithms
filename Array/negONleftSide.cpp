#include <bits/stdc++.h>
using namespace std;

void ans(int *a,int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        while(a[i]<0){i++;}
        while(a[j]>=0){j--;}
        if(i<j)
        {
            int t= a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }

    for(int x=0;x<n;x++)
    {
        cout<<a[x]<<" ";

    }
}

int main()
{
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    ans(a,n);


    return 0;
}