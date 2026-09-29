#include<iostream>
using namespace std;
class node{
    public:
     int val;
     node* next;
     
   node(int data){
     val= data;
    next=NULL;
   } 


};
 void insertAtHead(node* &head,int val)
 {
    node* new_node = new node(val);
    new_node->next=head;
    head=new_node;
 }

  void insertHeadtaill(node* &head,int val){
    node* new_node = new node(val);
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    
  }
  void insertHeadpossition(node* &head,int val,int pos){
    if(pos==0){
        insertAtHead(head,val);
    }
    node* new_node = new node (val);
    node* temp = head;
    int current_pos=0;
    while (current_pos!=pos-1)
    {
        temp=temp->next;
        current_pos ++;
    }
      new_node->next=temp->next;
      temp->next=new_node;
    
  }

 void possitionupdate(node* &head,int k,int val){
    node* temp=head;
    int curr_pos=0;
    while (curr_pos!=k)
    {
        temp=temp->next;
        curr_pos++;
    }
    temp->val=val;
    
 }

 void deleatAtHead(node* &head){
    node* temp=head;
    head=head->next;
    free(temp);
 }


 void deleatattill(node* &head){
   node* secand_last=head;
   while (secand_last->next->next!=NULL)
   {
      secand_last=secand_last->next;
   }
   node* temp=secand_last->next;
   secand_last->next=NULL;
   free(temp);
 }
 void deleatAtposition(node* &head,int pos){
   if(pos==0){
      deleatAtHead(head);
      return;
   }
  int  curr_pos=0;
   node* prev=head;
   while (curr_pos!=pos-1)
   {
      prev = prev->next;
      curr_pos++;
   }
   node* temp=prev->next;
   prev->next=prev->next->next;
   free(temp);

   
 } 
   
 
 void dispaly(node* head){
    node* temp=head;
    while (temp!=NULL)
    {    cout<<temp->val<<"-> ";
       temp = temp->next;

    }
    cout<<"null"<<endl;

    
 }
int main()
{
   node* head= NULL;
   insertAtHead(head,1);
   dispaly(head);
   insertAtHead(head,2);
   dispaly(head);
   insertHeadtaill(head,3);
   dispaly(head);
   insertHeadpossition(head,4,2);
   dispaly(head);
   possitionupdate(head,1,4);
   dispaly(head);
   deleatAtHead(head);
   dispaly(head);
   deleatattill(head);
   dispaly(head);
   deleatAtposition(head,1);
   dispaly(head);
   


   return 0;
}