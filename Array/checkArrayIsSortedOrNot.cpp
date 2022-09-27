#include <bits/stdc++.h>
using namespace std;

void isSorted(int *a,int n){
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1]){
            cout<<"Array is not sorted";
            return;
        }
    }
    cout<<"Array is sorted";
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
    isSorted(a,n);


    return 0;
}