/*

<---------------------------------------- Count Sort ------------------------------------->
Algorithm:

    1. Find the max value from the array.
    2. Create a new array with the size of max value + 1;
    3. Initialize the new array with the value zero.
    4. Iterate the array which we want to sort and increment the the occurrences in the new array.
    5. Then iterate the new array and copy numbers to the actual array.

Analysis:
    Time Complexity: O(n);
    Space Complexity: O(*max_element(arr));
    *max_element(arr) => The Maximum element of the array.

Let's see the code:

 */

#include <bits/stdc++.h>
using namespace std;

void countSort(vector<int> &a, int size)
{
    int maxValue = *max_element(a.begin(), a.end()); // finding the maximum value
    int n = maxValue + 1;
    vector<int> freqArr(n, 0); // creating frequency array

    for (int i = 0; i < size; i++)
    {
        freqArr[a[i]]++; // incrementing
    }

    int i = 0, j = 0;

    while (i < n)
    {
        if (freqArr[i] > 0)
        {
            a[j++] = i;
            freqArr[i]--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    countSort(arr, n);

    cout << "<---- After sorting ----->" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}