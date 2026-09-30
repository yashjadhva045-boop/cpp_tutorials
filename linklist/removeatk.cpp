#include<iostream>
using namespace std;
class node {
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
        node* new_node = new node(val);
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

node* removeatk(node* head,int k){
   node* ptr1=head;
   node* ptr2=head;
  

   int count =k;
   while (count--)
   {
    ptr2=ptr2->next;
   }
   if(ptr2==NULL){
    node* temp=head;
    head=head->next;
    free(temp);
    return head;

   }

   while (ptr2->next!=NULL)
   {
    ptr1=ptr1->next;
    ptr2=ptr2->next;
   }
   node* temp=ptr1->next;
   ptr1->next=ptr1->next->next;
   free(temp);
   


}

int main(){


    
    linklist ll;
    ll.insertattill(1);
    ll.insertattill(2);
    ll.insertattill(3);
    ll.insertattill(4);
    ll.insertattill(5);
    ll.dispaly();
    removeatk(ll.head,3);
    ll.dispaly();


    
}