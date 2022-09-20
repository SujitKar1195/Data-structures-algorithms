/*
file handling=> #include <fstream>
ofstream outfile("myText.txt");  by default if there are no myText.txt file then it will automatically create a this name file.
. If there already exist a file with this name with content then by default it will truncate the file content. if you dont want to delete the inside content then you just use this->
ostream outfile("myText.txt",ios::app); 

*/

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("myText.txt");
    outfile<<"hello ! welcome to the coding world"<<endl; // add content
    outfile<<345<<endl;
    outfile.close(); //It will close the file.



    return 0;
}