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
int length (node* head){
    node* temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
       temp= temp->next;
    }
    return length;

}
node* movehead(node* head , int k){
node* ptr = head;
while (k--)
{
    ptr= ptr->next;
}
return ptr;

}

node* intersect(node* head1, node* head2){
    node* ptr1= head1;
    node* ptr2= head2;

    int l1=length(head1);
    int l2 = length(head2);
    if(l1>l2){
        int k =l1-l2;
       ptr1= movehead(head1,k);
       ptr2= head2;
    }
    else{
        int k=l2-l1;
        ptr1=head1;
        ptr2=movehead(head2,k);
    }
    while (ptr1)
    {
        if(ptr1==ptr2)
        return ptr1;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
}
int main(){

    linklist ll1;
    ll1.insertattill(1);
    ll1.insertattill(2);
    ll1.insertattill(3);
    ll1.insertattill(4);
    ll1.insertattill(5);
    ll1.insertattill(6);
    ll1.dispaly();
    linklist ll2;
    ll2.insertattill(7);
    ll2.insertattill(8);
    ll2.dispaly();
    ll2.head->next->next=ll1.head->next->next->next;

    node* intersectt = intersect(ll1.head,ll2.head);
    if(intersectt!=NULL){
        cout<<intersectt->val<<endl;
    } 
    else{
        cout<<"-1"<<endl;
    }

    
    

    
}