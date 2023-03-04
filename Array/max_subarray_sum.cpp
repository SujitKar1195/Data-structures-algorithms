/*
    Author: Sujit Kar
    Date: 26/02/2023
    Topic: maximum subarray sum(brute force approach)
    Time Complexity: O(n^2)
    Space Complexity: O(n)
*/

#include <iostream>
#include <climits>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of the array: "<<endl;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum= 0;
        sum = accumulate(v.begin()+i,v.end(),sum);
        if(sum>=max)
        max = sum;
        
    }

    cout << "Result is : " << max << endl;



   return 0;
}