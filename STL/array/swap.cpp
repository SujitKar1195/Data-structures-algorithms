/*
    Author: Sujit Kar
    Date: 26/02/2023
    Topic: Vector -> swap()
    Time Complexity: O()
    Space Complexity: O()
*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,10>a= {1,2,3,4,5,6,7,8,9,10};
    array<int,10>b;
    b.swap(a);

    for(auto i:b)
        cout << i << " ";




   return 0;
}