#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=next;
        
    }
};
//It will return head of the reversed list
Node*rev(Node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node*chotahead=rev(head->next);

    head->next->next=head;
    head->next=NULL;
    return chotahead;
}
void reverse(Node*&head,Node*curr,Node*prev){
    if(curr==NULL){
        head=prev;
        return;
    }
    Node*forward=curr->next;
    curr->next=prev;
    reverse(head,forward,curr);

}
Node*reverselinkedlist(Node*head){
    return rev(head);
//    Node*curr=head;
//    Node*prev=NULL;
//    reverse(head,curr,prev);
//    return head;

}
void print(Node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
       Node*head=new Node(5);
       Node*fir=new Node(7);
       Node*sec=new Node(3);
       Node*thir=new Node(9);
      
       head->next=fir;
 
       fir->next=sec;

       sec->next=thir;

       thir->next=NULL;
       head=reverselinkedlist(head);
       print(head);
       
    return 0;
}