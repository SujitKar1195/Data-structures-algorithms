#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> &v)
{
    cout<<"result\n";
    for(int i=0;i<v.size();++i)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    int N;
    cout << "Enter the vector array size:" << endl;
    cin >> N;
    vector<int> v[N]; // Array vector declaration
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter vector's " << i << "th "
             << " size:\n";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout << "Enter element\n";
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
        printVec(v[i]);

    return 0;
}