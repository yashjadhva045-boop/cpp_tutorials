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
void deleteduplicate(node* &head){
    node* curr_node =head; 
    while (curr_node)
    {
       while (curr_node->next && curr_node->val==curr_node->next->val)
       {
        node* temp =curr_node->next;
        curr_node->next=curr_node->next->next;
        free(temp);
       }
       curr_node= curr_node->next;
       
    }
    
}

int main()
{
    linklist ll;
    ll.insertattill(1);
    ll.insertattill(2);
    ll.insertattill(2);
    ll.insertattill(3);
    ll.insertattill(3);
    ll.insertattill(3);
    ll.dispaly();
    deleteduplicate(ll.head);
    ll.dispaly();

}