#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
     node(int data){
        val=data;
        next=NULL;

     }
};
class linklist{
    public:
    node* head;
    linklist(){
        head=NULL;
    }

   void insertattill(int val){
    node* new_node= new node(val);
    if(head==NULL){
        head=new_node;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
   } 

  void dispaly(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
  } 
};
node* reversell (node* &head){
    // node* prevptr=NULL;
    // node* currptr=head;
    // while (currptr!=NULL)
    // {
    //    node* next = currptr->next;
    //   currptr->next=prevptr;
    //   prevptr=currptr;
    //   currptr=next;


    // }
    // node* new_head = prevptr;
    // return new_head;

    //base case
    if(head==NULL|| head->next==NULL){
        return head;
    }
  
    //using recursive case
    node* new_head=reversell(head->next);
    head->next->next=head;
    head->next=NULL;
    return new_head;
    
    
    
}

int main()
{
    linklist ll;
    ll.insertattill(1);
    ll.insertattill(2);
    ll.insertattill(3);
    ll.insertattill(4);
    ll.insertattill(5);
    ll.insertattill(6);
    ll.dispaly();
    ll.head = reversell(ll.head);
    ll.dispaly();
    
  

}