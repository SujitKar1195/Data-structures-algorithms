/*
    Author: Sujit Kar
    Date: 26/02/2023
    Topic: Vector -> Kadane's Algo ; max subarray sum
    Time Complexity: O(n)
    Space Complexity: O(n)

*/
#include <iostream>
using namespace std;

void Kadane_algo(int *a, int n)
{
    int sum = 0;
    int maxi = a[0];
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        maxi = max(maxi,sum);
        if(sum<0)
            sum = 0;
    }

    cout << "Answer is " << maxi << endl;
}


int main()
{
    int t;
    cout << "Enter test cases : ";
    cin >> t;

    while (t--)
    {
        int n;
        cout << "Enter the size of the array : " << endl;
        cin >> n;
        int *a = new int[n]; // heap storage
        for (int i = 0; i < n; i++)
            cin >> a[i];

        Kadane_algo(a, n);

        delete []a;
    }
    return 0;
}