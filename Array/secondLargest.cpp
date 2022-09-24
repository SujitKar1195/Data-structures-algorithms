#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int print2largest(int arr[], int n) {

	    int max = INT_MIN;
	    int f = arr[0],flag = 0;
	    
	    for(int i=1;i<n;i++){
	        if(arr[i]!= f){
	            flag = 0;
	            break;
	        }
	        else{
	            flag=1;
	        }
	    }
	    if(flag==1){
	        return -1;
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]>max){
	            max = arr[i];
	        }
 
	    }
	    	    int second_max = INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]==max){
	            continue;
	        }
	        else{
	            if(arr[i]>second_max){
	                second_max = arr[i];
	            }
	        }
	    }
	    return second_max; 
	}
};

int main(){
    int t;
    cout<<"Enter test cases : ";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"size of the array : ";
        cin>>n;
        int a[n];
        cout<<"Enter element of the array : ";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Solution obj;
        int ans = obj.print2largest(a,n);
        cout<<"second largest element is " <<ans<<endl;
    }
}