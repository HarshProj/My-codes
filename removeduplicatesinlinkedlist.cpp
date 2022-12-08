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
};
Node*uniqueSortedlist(Node*head){
    //empty list
    if(head==NULL)
        return NULL;
    //non emptylis
    Node*curr=head;

    while(curr!=NULL){
        if(curr->next!=NULL && curr->data==curr->next->data){
            Node*next_next=curr->next->next;
            Node*nodetodelete=curr->next;
            delete(nodetodelete);
            curr->next=next_next;
        }
        else{
            curr=curr->next;
        }
    }
    return head;  
}

Node*uniqueunsortedlist(Node*head){
    
}
int main(){

    return 0;
}