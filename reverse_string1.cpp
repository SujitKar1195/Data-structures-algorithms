#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100];
    cin.getline(a,100);
    

    int i,j,temp;

    for(j=0;a[j]!='\0';j++){

    }

    j = j-1;

    for(i=0;i<j;i++,j--){
        temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    printf("%s",a);


return 0;
}