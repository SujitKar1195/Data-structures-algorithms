

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="madam";
    int i,j;
    for(i=0;s[i]!='\0';i++){
        
    }
    i=i-1;
    
    int f=0;
    for(j=0,i=i;i!=j;j++,i--){
        if(s[j]!=s[i]){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"not palindrome";
    }
    else{
        cout<<"palindrome";
    }

    return 0;
}
