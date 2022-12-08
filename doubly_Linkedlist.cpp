#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free for node with data"<<val<<endl;
    }
};
void print(Node *head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getLength(Node*head){
      Node*temp=head;
      int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}
void insertAtTail(Node* &tail,Node*& head,int d){
    if(tail==NULL){
        Node * temp =new Node(d);
        tail=temp;
        head=temp;
    }
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertAtHead(Node*& head,Node* &tail,int d){
     if(head==NULL){
        Node * temp =new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    //if Position is 1
     if(position==1){
        insertAtHead(head,tail,d);
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
        insertAtTail(tail,head,d);
        return;
    }
    //Creating a node for d;
    Node*nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    temp->next->prev=nodeToinsert;
    temp->next=nodeToinsert;
    nodeToinsert->prev=temp;

}
//Deletion 

void deleteNode(Node* &head,int position){
    // deleting start node 
    if(position==1){
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
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
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;

        delete curr;
    }
}

int main(){
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,tail,22);
    print(head);

    insertAtHead(head,tail,11);
    print(head);

    insertAtHead(head,tail,13);
    print(head);
    insertAtTail(tail,head,25);
    print(head);
    insertAtPosition(head,tail,2,100);
    print(head); 

    deleteNode(head,6);
    print(head); 
    return 0;
}