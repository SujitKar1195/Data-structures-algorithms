#include <bits/stdc++.h>
using namespace std;

int main()
{
    

    char a[100];
    cin.getline(a,100);
    char b[100];

    int i,j;

    for(i =0;a[i]!='\0';i++){

    }

    i = i-1;
    for(j=0;i>=0;i--,j++){
        b[j]=a[i];
    }

    b[j]='\0';

    printf("%s",b);




return 0;
}