#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char s[100] = "Today is a rainy day";
    char *p  = strtok(s," ");
    cout << p << endl;
    while(p!=NULL)
    {
        p = strtok(NULL," ");
        cout << p << endl;

    }


    return 0;
}