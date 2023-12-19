/*
<---Welcome to Dynamic Programming-->

In the fibonacci program, if we use basic recursion to solve then it is going to take O(2^n) time and the space complexity will be of O(n) time.

Time taking by this program is not very impressive. Like for Fib(50) it can be taken more time in general purpose computers.


Intuition:
    For better optimize time complexity we can use {Memoization} (To store previous calculated values in memory).

    Let's see the code:)
*/

#include <bits/stdc++.h>
using namespace std;

// This is the naive approach
// int Fib(int n)
// {
//     if (n <= 2)
//         return 1;

//     return Fib(n - 1) + Fib(n - 2);
// }

// Memoization Program
long long Fib(int n, long long memo[])
{
    if (n <= 2)
        return 1;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = Fib(n - 1, memo) + Fib(n - 2, memo);

    return memo[n];
}

int main()
{

    // cout << Fib(4) << endl;
    // cout << Fib(6) << endl;
    // cout << Fib(10) << endl;
    // cout << Fib(50) << endl; // It is going to stuck

    long long a[100];
    memset(a, -1, 100);
    cout << Fib(2, a) << endl;
    cout << Fib(3, a) << endl;
    cout << Fib(4, a) << endl;
    cout << Fib(5, a) << endl;
    cout << Fib(7, a) << endl;
    // cout << Fib(50, a) << endl;
    return 0;
}