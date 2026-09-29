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
void reverseprint (node* &head){
    if(head==NULL)return;
    reverseprint(head->next);
    cout<<head->val<<"->";
   
    
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
    reverseprint(ll.head);
  

}