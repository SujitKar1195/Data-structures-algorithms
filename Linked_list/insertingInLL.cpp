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

Node *insertToHead(Node *head,int key ,int pos){
  Node *t = new Node(key);
  t->next = head;
  first = t;

  return first;
}

Node *insertion(Node *first,int key,int pos){
  Node *t=new Node(key);
  Node *p= first;
  for(int i=0;i<pos-1;i++){
    p = p->next;
  }
  t->next = p->next;
  p->next= t;
  return first;
}

void display(Node *head){
  Node *t = head;
  while(t!=NULL){
    cout<<t->data<<" ";
    t = t->next;
  }
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
  cout<<"value that you want to insert : ";
  cin>>key;
  int pos;
  cout<<"where to be inserted : ";
  cin>>pos;
  if(pos==0)
  {first = insertToHead(first,key,pos);
    display(first);
    }
  else{
    first = insertion(first,key,pos);
    display(first);
  }
return 0;
}