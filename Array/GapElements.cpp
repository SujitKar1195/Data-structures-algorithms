#include <iostream>
using namespace std;

void gapElement(int *a,int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]+1<a[i+1])
            count+=(a[i+1]-a[i]-1);
    }

    cout << count << endl;
}

int main()
{
    int n;
    cout << "Enter size : ";
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    gapElement(a,n);


   return 0;
}