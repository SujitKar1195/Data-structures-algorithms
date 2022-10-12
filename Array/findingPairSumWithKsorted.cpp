#include <bits/stdc++.h>
using namespace std;

void pairSum(int *a,int n,int k)
{
    int i=0,j=n-1;
    int count=0;
    while(i<j)
    {
        if(a[i]+a[j]==k)
        {
            printf("%d + %d = %d\n",a[i],a[j],k);
            count++;
            i++,j--;
        }
        else if(a[i]+a[j]>k)
        {
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"No of pair sum is : "<<count<<endl;

}

int main()
{   int m;
    cout<<"Enter the size of an array"<<endl;
    cin>>m;
    int a[m];
    cout<<"Enter array elements "<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"Enter the k Value: ";
    cin>>k;
    pairSum(a,m,k);


    return 0;
}