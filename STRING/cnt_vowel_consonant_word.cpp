#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    string::iterator i;
    int vowel=0;
    int consonant=0;
    int word=0;
    for(i=s.begin();i!=s.end();i++){
        if(*i=='A' || *i=='a' || *i=='E' || *i=='e' || *i=='I' || *i=='i' || *i=='O' || *i=='o' || *i=='U' || *i=='u'){
            vowel+=1;
        }
        else if(*i==' '){
            word+=1;
        }
        else{
            consonant+=1;
        }
    }
    cout<<"Vowels : "<<vowel<<endl<<"Consonants : "<<consonant<<endl<<"Words : "<<word+1<<endl;


    return 0;
}