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

void Sum(Node *head){
  Node *t=head;
  int sum=0;
  while(t!=NULL){
    sum+=t->data;
    t= t->next;
  }
  cout<<"Sum of the Nodes is : "<<sum<<endl;
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
  //sum of the nodes is
  Sum(first);

 

  
}