/*
    Author: Sujit Kar
    Date: 12/03/2023
    Topic: array representation of a Binary Tree
    Time Complexity: O()
    Space Complexity: O()
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    char a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    //Binary Representation
    //Formula for Left Child -> 2*i
    //Formula for right Child -> 2*i+1
    //Formula for Parent -> floor(i/2);

    // Binary Printing

    for(int i=1;i<=(n/2);i++)
    {
        cout << "Root: " << a[i] <<"\n\t";
        cout << "Left Child : " << a[2*i] << "\n\t";
        cout << "Right Child : " << a[2*i+1] << endl;

    }

    cout << endl;



   return 0;
}