#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data){
          this->data = data;
          this->next = NULL;
        }
}*first=NULL;

void create(int a[],int n){
  Node *t,*last;
  first = new Node(a[0]);
  last = first;
  for(int i=1;i<n;i++){
    t = new Node(a[i]);
    last->next = t;
    last = t;
    
  }
}

Node *search(Node *p,int key){
  Node *t = p;
  //Iterative approach
  /*
  while(p!=NULL){
    if(key==t->data){
      return t;
    }
  }
  return NULL;
  */
  //Recursive approach
  if(t==NULL){
    return NULL;
  }
  if(key==t->data){
    return t;
  }
  return search(t->next,key);
  
}

int main(){
  int n;
  cout<<"Enter how much linked element you want : ";
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  create(a,n);
  int key;
  cout<<"which to be searched : ";
  cin>>key;
  Node *result = search(first,key);
  if(result==NULL){
    cout<<"Not present\n";
  }
  else{
    cout<<"Present\n";
  }


}