#include <bits/stdc++.h>
using namespace std;

int isSorted(int *a,int n){
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1]){
            
            return false;
        }
    }
    return true;
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
    if(isSorted(a,n)){
        cout<<"Array is sorted\n";
    }
    else{
        cout<<"array is not sorted"<<endl;
    }


    return 0;
}