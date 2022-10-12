#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size\n";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int j;
    cout<<"Duplicate numbers are \n";
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
          j = i+1;
          while(a[i]==a[j])j++;
          cout<<a[i]<<" is appearing "<<j-i<<" times\n";
          i = j-1;
        }
    }

    return 0;
}