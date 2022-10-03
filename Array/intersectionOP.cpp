#include <bits/stdc++.h>
using namespace std;

int intersectionOp(int *a,int asize,int *b,int bsize,int *newArr,int size)
{
    int i=0,j=0,k=0;
    while(i<size)
    {
        if(asize==size){
            int x = a[i++];
            j=0;
            while(j<bsize)
            {
                if(x==b[j])
                {
                    newArr[k++] = b[j++];
                }
                else{
                    j++;
                }
            }

        }
        else if (bsize==size){
            int x = b[i++];
            j=0;
            while(j<asize)
            {
                if(x==a[j])
                {
                    newArr[k++] = a[j++];
                }
                else{
                    j++;
                }
            }
        }
       

    }
    return k;
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
    int x;
    if(m>n)
    {
        x=n;
    }
    else{
        x= m;
    }
    int newArr[x];
    int k = intersectionOp(a,m,b,n,newArr,x);
    if(k==0){
        cout<<"No intersected value is present\n";
    }
    else{
    cout<<"after intersection operation : \n";
    for(int i=0;i<k;i++)
    {
        cout<<newArr[i]<<" "; 
    }
    cout<<endl;
    }



    return 0;
}