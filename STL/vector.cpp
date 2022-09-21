#include <iostream>
#include <vector> //including vector
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    cout<<"using for each loop\n";
    for(int x:v)    //for each loop
    {
        cout<<x<<" ";
    }
    cout<<endl;

    //for iterating there is another process called -> iterator
    cout<<"Using iterator\n";
    vector<int>::iterator i;
    for(i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    //insert at the end
    cout<<"after Inserting element\n";
    v.push_back(11);
    v.push_back(12);
    for(i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }

    //delete at the end
    cout<<endl;
    cout<<"After deleting element \n";
    v.pop_back();
    v.pop_back();
    for(i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}