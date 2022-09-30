
#include <iostream>

using namespace std;

int unionOp(int *a,int asize,int *b,int bsize,int*newArr,int size)
{
    int i=0;
    int j=0,k=0;
    while(i<asize)
    {
        newArr[k++] = a[i];
        i++;
    }
    while(j<bsize){
        
            int m =1;
        for(int s=0;s<size;s++)
        {
            if(b[j]==newArr[s]){
                m=0;
                break;
            }

        }
        if(m==0)
        {
            j++;
        }
        else{
            newArr[k++]  = b[j++];
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

    int newArr[m+n];
    int size = unionOp(a,m,b,n,newArr,m+n);


    cout<<"new union array : ";
    for(int i=0;i<size;i++)
    {

        cout<<newArr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}
