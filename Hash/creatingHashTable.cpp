/*
Discussion:
    Hashing is a searching technique in which inserting,deletion and searching will take constant time(O(n)) average , in worst case time complexity of hashing is still O(n).

    //Components of Hashing
    1.Hash Table
    2.Hash Function
    3.Collisions
    4. Collision Resultion Techniques

    Let's talk about Components of Hashing
    1. Hash Table:
        Hash Table is a generalization of array. With an array, we store the element whose key is k at a position k of the array. That means,given a key k, we find the element whose key is k by just looking in the kth position of the array.This is called direct addressing.

    2. Hash Function:
        The first idea behind hash tables is to expliot the efficiency of arrays. So: to map a key to an entry, we first map a key to an integer then use the integer to index an array. The first map is called a HASH FUNCTION. The Hash function is used to transform the key into the slot index. Ideally, the hash function should map each possible key to a unique slot index, but it is difficult to achieve in practice.

        #Load Factor:
            The load factor of a non-empty hash table is the number of items stored in the table divided by the size of the table.
            It tells whether the hash function is distributing the keys uniformly or not.

                            Number of elements in Hash table
            Load factor = ------------------------------------
                                    hash table size
    3. Collisions:






*/

#include <iostream>
using namespace std;

int main()
{

    return 0;
}