#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int swapped = 0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
                swapped =1;
            }
        }
        if(swapped==0)
        {
            break;
        }
    }
}

void printARR(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubbleSort(a,n);
    printARR(a,n);




    return 0;
}