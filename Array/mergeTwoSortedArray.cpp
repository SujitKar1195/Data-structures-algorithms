#include <bits/stdc++.h>
using namespace std;

void merging(int *a,int aSize,int *b,int bSize,int *newArr)
{
    int i=0,j=0,k=0;
    while(i<aSize && j<bSize)
    {
        if(a[i]<b[j])
        {
            newArr[k++] = a[i++];
        }
        else
        {
            newArr[k++] = b[j++];
        }
    }

    if(i<aSize)
    {
        for(;i<aSize;i++)
        {
            newArr[k++] = a[i];
        }
    }
    else
    {
        for(;j<bSize;j++)
        {
            newArr[k++] = a[j];
        }
    }

}

int main()
{
    int m,n;
    cout<<"Enter the size of the first array"<<endl;
    cin>>m;
    int a[m];
    cout<<"Enter array elements "<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }


    cout<<"Enter the size of the second array"<<endl;
    cin>>n;
    int b[n];
    cout<<"Enter array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    int newArr[m+n];
    merging(a,m,b,n,newArr);


    cout<<"new merginng array : ";
    for(int i=0;i<m+n;i++)
    {

        cout<<newArr[i]<<" ";
    }
    cout<<endl;


    return 0;
}