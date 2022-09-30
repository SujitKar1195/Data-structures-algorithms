#include <bits/stdc++.h>
using namespace std;


void selection(int *a ,int n)
{
    int min_index;
    for(int i=0;i<n-1;i++)
    {
        min_index = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index]){
                min_index = j;
            }
        }
        int t = a[min_index];
        a[min_index]= a[i];
        a[i] = t;
    }
}

void printARR(int arr[], int n)
{
   for (int i = 0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}

int main()
{

    int n;
    cout<<"Enter the size "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selection(a,n);
    printARR(a,n);


    return 0;
}