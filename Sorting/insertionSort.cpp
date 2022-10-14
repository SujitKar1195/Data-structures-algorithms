#include <bits/stdc++.h>
using namespace std;


void insertionSort(int *a,int n)
{
    for(int i=1;i<n;i++)
    {
        int j = i - 1;
        int x = a[i];
        while(j>=0 && a[j]>x)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
    }

}

void print(int *a ,int n)
{
    cout<<"After sorting the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t ;
    cout<<"Test cases : \n";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter size of an array : \n";
        cin>>n;
        int *a = new int[n];
        cout<<"Enter elements\n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        insertionSort(a,n);
        print(a,n);
        delete []a;
    }


    return 0;
}
