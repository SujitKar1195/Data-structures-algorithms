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

int search(Node *p,int key){
  Node *t,*q = NULL;
  while(p!=NULL){
    if(key==p->data){
      q->next = p->next;
      p->next = first;
      first = p;
      return 1;
      
    }
    q = p;
    p = p->next;
  }
  return 0;
  
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
   
  if(search(first,key)){
    cout<<"present\n";
  }
  else{
    cout<<"Not Present\n";
  }
    return 0;
 

  
}