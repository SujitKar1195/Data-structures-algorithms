#include <bits/stdc++.h>
#define SIZE 10
using namespace std;

int hashFunc(int key)
{
    return key % SIZE;
}

int probe(int HT[], int key)
{
    int index = hashFunc(key);
    int i = 0;
    while (HT[(index + i) % SIZE] != 0)
        i++;

    return (index + i) % SIZE;
}

void insert(int HT[], int key)
{
    int index = hashFunc(key);
    if (HT[index] != 0)
        index = probe(HT, key);

    HT[index] = key;
}

int search(int HT[], int key)
{
    int index = hashFunc(key);
    int i = 0;
    while (HT[(index + i) % SIZE] != key && i < 20)
    {
        i++;
    }
    if (i < SIZE)
        return (index + i) % SIZE;
    return -1;
}

int main()
{
    int HT[10] = {0}; // declaration of hash table

    insert(HT, 10);
    insert(HT, 20);
    insert(HT, 30);
    insert(HT, 11);
    insert(HT, 5);
    insert(HT, 25);
    insert(HT, 29);

    cout << search(HT, 20) << endl;
    cout << search(HT, 11) << endl;
    cout << search(HT, 111) << endl;

    return 0;
}