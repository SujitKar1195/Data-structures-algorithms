#include <bits/stdc++.h>
using namespace std;

int findMin(int *a,int n)
{
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(min>a[i]){
            min = a[i];
        }
    }
    return min;
}
int findMax(int *a,int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i]){
            max= a[i];
        }
    }
    return max;
}

int main()
{
    cout<<"Using hash table we will solve this problem\n";
    int n;
    cout<<"Enter the size\n";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int l = findMin(a,n);
    int h = findMax(a,n);
    int *b = new int[h];

    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    int j=1;
    for(int i=l;i<=h;i++)
    {
        if(b[i]==0)
        {
            cout<<j<<")missing element is " <<i<<endl;
            j++;
        }
    }
    delete []b;

    return 0;
}