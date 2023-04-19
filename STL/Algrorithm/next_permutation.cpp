#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(int *a,int n)
{
    for(int i=0;i<n;i++)
        cout << a[i] <<" ";
    cout << endl;
}

int main()
{
    int a[] = {1,2,3,4,5};
    int n = 5;
    //rotating an array
    rotate(a,a+2,a+n); //a+2 means from where we want to rotate an array;
    print(a,n);

    //using vector
    vector<int>v={1,2,3};
    /*
    rotate(v.begin(),v.begin()+2,v.end());
    for(int i:v)
        cout << i << " ";
    cout << endl;
    */

    // print next permutation , means next greater number
    next_permutation(v.begin(),v.end());
    for (int i:v)
        cout << i << " ";
    cout << endl;



    return 0;
}