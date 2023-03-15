/*
    Author: Sujit Kar
    Date: 15/03/2023
    Topic: alternate swap array elements
    Time Complexity: O(n)
    Space Complexity: O()
*/
#include <iostream>
#include <utility>
using namespace std;



void alternateSwap(int *a,int n)
{
    for(int i=0;i<n-1;i+=2)
    {
        swap(a[i],a[i+1]);
    }
}

int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    alternateSwap(a,n);

    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;


   return 0;
}