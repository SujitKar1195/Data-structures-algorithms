
/*
    Author: Sujit Kar
    Date: 26/02/2023
    Topic: Vector -> data()
    Time Complexity: O()
    Space Complexity: O()
*/
#include <iostream>
#include <array>
#include <cstring>
using namespace std;

int main()
{
  const char* cstr = "Test string";
  array<char,12> charray;

  memcpy (charray.data(),cstr,12);

  cout << charray.data() << '\n';
  return 0;
}