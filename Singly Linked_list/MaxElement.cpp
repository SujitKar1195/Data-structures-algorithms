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

void max(Node *head){
  Node *t=head;
  int max=INT_MIN;
  while(t!=NULL){
    
    if(max < t->data)
    {
      max= t->data;
      }
    t= t->next;
    
  }
  cout<<"max element in the Linked list : "<<max<<endl;
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
  //max element in the Linked list
  max(first);

 

  
}