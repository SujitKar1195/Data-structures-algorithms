#include <bits/stdc++.h>
using namespace std;

void inserting(int *a,int n,int x)
{
    int i=n-1;
    while(a[i]>x){
        a[i+1]=a[i];
        i--;
    }
    a[i+1] = x;
}

int main()
{
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int a[n+1];
    cout<<"Enter a sorted array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"Enter the value : ";
    cin>>key;
    inserting(a,n,key);

    for(int i=0;i<n+1;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}