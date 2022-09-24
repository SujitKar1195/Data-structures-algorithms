#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int sum(int n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
        return sum;

    }
};

int main()
{
    int t;
    cout<<"Enter test cases : ";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the Number : ";
        cin>>n;
        solution obj;
        int ans = obj.sum(n);
        cout<<"Sum of the series is : "<<ans<<endl;
    }


    return 0;
}