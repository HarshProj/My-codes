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

Node*kReverse(Node*head,int k){
    //base case
    if(head==NULL){
        return NULL;
    }

    //Step 1
    Node*next=NULL;
    Node*curr=head;
    Node*prev=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++; 
    }

    //step 2 Recursion will cover up 
    if(next!=NULL){
        head->next=kReverse(next,k);
    }

    //step 3 
    return prev;
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
int main(){
         
    return 0;
}