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
        int value= this->data;

        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for mode with dara"<<value<<endl;
    }
};
void insertAtHead(Node*&head,int d){
    //New node create
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertAtTail(Node*&tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void InsertAtPosition(Node* &head,Node* &tail, int position,int d){

    //Insert at starting
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //inserting at last
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }
    //Creating a node for d;
    Node*nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    temp->next=nodeToinsert;
}
void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteNode(Node* &head,int position){
    // deleting start node 
    if(position==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting last node or in between node
        Node*curr=head;
        Node*prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    Node*node1=new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    //head poimted to node1
    Node*head=node1;
    Node*tail=node1;
    InsertAtTail(tail,15);
    print(head);
    InsertAtTail(tail,14);
    print(head);
    InsertAtPosition(head,tail,3,55);
    deleteNode(head,4);
    print(head);
    return 0;
}