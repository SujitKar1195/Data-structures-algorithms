#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int *a,int l,int h)
{
    int x = a[h];
    int i = l-1;
    for(int j=l;j<h;j++)
    {
        if(a[j]<=x)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    return i+1;
}

void quickSort(int *a,int l,int h)
{
    if(l<h)
    {
        int pivot = partition(a,l,h);
         quickSort(a,l,pivot-1);
       quickSort(a,pivot+1,h);
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
    cout<<"Size \n";
    cin>>n;
    int a[n];
    cout<<"Enter elements\n" ;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quickSort(a,0,n-1);
    printARR(a,n);


    return 0;
}