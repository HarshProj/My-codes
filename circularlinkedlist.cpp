#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory if free for node with data"<<value<<endl;
    }
};

void insertNode(Node*&tail,int element,int d){
    //assuming that the element is present in the list
    if(tail==NULL){
        Node*temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }
    else{
        //Non empty list
        Node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //element found
        Node*temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deletenode(Node*&tail,int d){
    //Empty list
    if(tail==NULL){
        cout<<"List is empty can;t delete"<<endl;
    }
    else{
        //Non empty

        //assuming that value is present in the linkedlist
        Node*prev=tail;
        Node*curr=prev->next;
        while(curr->data!=d){
            prev=curr;
            curr=curr->next;
            return ;  
        }
        prev->next=curr->next;

        //1node linked list
        if(curr==prev){
            tail=NULL;
        }
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
void print(Node*tail){
    Node*curr=tail;
    
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=tail);
    cout<<endl;
}
bool iscircular(Node*head){
    if(head==NULL){
        return true;
    }
    Node*temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
        return false;
}
bool detectloop(Node*head){
    if(head==NULL){
        return false;
    }
    map<Node*,bool>visited;

    Node*temp=head;
    while(temp!=NULL ){
        //cycle is present
        if(visited[temp]==true){
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false; 
}
Node*floyddetectloop(Node*head){
    if(head==NULL){
        return NULL;
    }
    Node*slow=head;
    Node*fast=head;

    while(slow!=NULL && fast !=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            cout<<"Present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
Node*getstartingnode(Node*head){
    if(head==NULL)
        return NULL;

    Node*intersection=floyddetectloop(head);
    Node*slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

void removeloop(Node* &head){
    if(head==NULL){
        return ;
    }
    Node*startofloop=getstartingnode(head);
    Node*temp=startofloop;
    while(temp->next!=startofloop){
        temp=temp->next;
    }
    temp->next=NULL;
}
int main(){
    Node*tail=NULL;
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,3,10);
    print(tail);
    
    deletenode(tail,7);
    print(tail);
    
    deletenode(tail,3);
    print(tail);
    return 0;
}