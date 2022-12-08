#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};
void print(Node*head){
    Node*temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head ||temp==NULL);
    cout<<endl;

}
void twohalves(Node* &head){
    Node*slow=head;
    Node*head2;
    Node*fast=head->next;
    while(fast->next!=head){
        slow=slow->next;
        fast=fast->next;
        if(fast->next!=head){
            fast=fast->next;
        }
    }
    head2=slow->next;
    cout<<fast->data<<endl;
    cout<<slow->data<<endl;
    cout<<head2->data<<endl;
    fast->next=NULL;
    slow->next=NULL;
    // cout<<"I st  halves"<<endl;
    // print(head);

    // cout<<"II nd  halves"<<endl;
    // print(head2);
}
int main(){
    Node*node1=new Node(10);

    Node*node2=new Node(15);
    node1->next=node2;
    Node*node3=new Node(19);
    node2->next=node3;
    Node*node4=new Node(16);
    node3->next=node4;
    Node*node5=new Node(18);
    node4->next=node5;
    node5->next=node1;

    //pahle
    print(node1);

    //Baad me 
    twohalves(node1);
    
    // print(node4);


    return 0;
}