#include <iostream>
using namespace std;


int noise(int *a,int x,int s,int e)
{
    

    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]<x)
        {
            e = mid-1;
        }
        else if(a[mid]>x)
            s = mid+1;

    }
    return -1;
    
}
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int m;
    cout << "Id array size : ";
    cin >> m;

    int indexArr[m];
    for(int i=0;i<m;i++)
        cin >> indexArr[i];
    
    for(int i=0;i<m;i++)
    {
        int y = indexArr[i];
        cout<<"book id "<<y<<" \n";
        int x = noise(a,y,0,n-1);
      
       if(x!=-1)
       cout << x<<endl;
       else
       cout<<n<<endl;
    }





   return 0;
}