#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100];
    cout<<"enter first string:->\n";
    cin.getline(a,100);

    char b[100];
    cout<<"enter second string:->\n";
    cin.getline(b,100);

    int i,j;

    for(i=0,j=0;a[i]!='\0'&& b[j]!='\0';i++,j++){
        if(a[i]!=b[j]){
            break;
        }
    }

    if(a[i]==b[j])
    {
        cout<<"equal"<<endl;
    }
    else if(a[i]<b[i]){
        cout<<"smaller"<<endl;
    }
    else{
        cout<<"greater"<<endl;
    }

return 0;
}