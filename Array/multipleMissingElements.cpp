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

    int dif = a[0];
    int j=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]-i!=dif)
        {
            while(dif<a[i]-i)
            {
                cout<<j<<") missing element is "<<i+dif<<endl;
                dif++;
                j++;
            }
        }
    }



    return 0;
}