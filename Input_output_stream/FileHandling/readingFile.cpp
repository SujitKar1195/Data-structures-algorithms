#include <bits/stdc++.h>
#include <fstream>
using namespace std;


/*
    for infile, there must be exist file.
*/

int main()
{
    ifstream infile;
    infile.open("myText.txt");
    string str;
    int x;
    infile>>str;
    
    cout<<str<<" "<<endl;
    if(infile.eof())
    {
        cout<<"reached at the end of file";
    }
    infile.close();


    return 0;
}