/*welcome to Binary search Array. Binary Search works only on sorted array*/
/*Time complexity taken by this algorithm is => O(1)-O(n)*/
#include <bits/stdc++.h>
using namespace std;

void binarySearch(int a[],int size,int key){
    int s=0;
    int e=size-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid]==key){
            cout<<key<<" is present at index "<<mid<<endl;
            break;
        }
        else if(key<a[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
}

int main()
{
    int n;//size of an array
    cout<<"Enter the size of an array : ";
    cin>>n;
    int A[n];//Array declaration
    cout<<"Take array inputs : ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    int key;
    cout<<"enter key element : ";// which number you want to search
    cin>>key;
    binarySearch(A,n,key);

    return 0;
}