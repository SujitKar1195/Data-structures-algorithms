/*
    Author: Sujit Kar
    Date: 26/02/2023
    Topic: Possible No. of Trees can be generated
    Time Complexity: O(n)
    Space Complexity: O()
*/

#include <iostream>
using namespace std;

long long fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    long long factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

long long com(long long N, long long R)
{
    long long nominator = fact(N);
    long long denominator = fact(N - R);
    long long ans = 1;
    ans = nominator / (denominator * fact(R));
    return ans;
}

int main()
{
    int t;
    cout << "Enter test cases : ";
    cin >> t;

    while (t--)
    {
        int n;
        cout << "Enter number of Nodes: " << endl;
        cin >> n;

        long long combination = com(2 * n, n);
        long long catalanNumber = combination / (n + 1);

        cout << "Number of Trees  possible  for UNLABELLED NODES will be : " << catalanNumber << endl;
        cout << "Number of Trees  possible  for LABELLED NODES will be : " << catalanNumber * fact(n) << endl;
        
    }

    return 0;
}