/*
Interpolation searching technique works on sorted & uniformly distributed array.
like>
1 2 3 4 5(difference between each is:1);
1 3 5 7 9(difference between each is:2)

using interpolation search we will search in which position the searching element is present.

formula=> low,high is the index and x = searching element.

ans: pos = pos+(high-low)*((x-a[low])/(a[high]-a[low]))

*/
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a[6] = {1,3,5,7,9,11};
    int length = sizeof(a)/sizeof(int);
    int x;
    cout<<"searching element ";
    cin>>x;
    int l = 0;
    int h = 5;
    
    int m = h-l;
    int n = x-a[l];
    int k = a[h]-a[l];
    int pos= l+(m*n)/k;
    
    if(pos>=0 && pos<=length-1)
    {
        cout<<"At "<<pos<<" index "<<x<<" is present"<<endl;
    }
    else{
        cout<<"Element is not present in the array\n";
    }


    return 0;
}