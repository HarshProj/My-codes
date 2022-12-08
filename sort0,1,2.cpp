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
Node*sortlist(Node*head){
    int zerocount=0;
    int onecount=0;
    int twocount=0;

    Node*temp =head;
    while(temp!=NULL){
        if(temp->data==0){
            zerocount++;
        }
        else if(temp->data==1){
            onecount++;
        }
        else if(temp->data==2){
            twocount++;
        }
    }
    temp=head;
    while(temp!=NULL){
        if(zerocount!=0){
            temp->data=0;
            zerocount--;
        }
        else if(onecount!=0){
            temp->data=1;
            onecount--;
        }
        else if(twocount!=0){
            temp->data=2;
            twocount--;
        }
    }
    return head;  
}
//optimised solution 
void insertattail(Node* &tail,Node*curr){
    tail->next=curr;
    tail=curr;
}
Node*sortlist(Node*head){
    Node*zerohead=new Node(-1);
    Node*zerotail=zerohead;

    Node*onehead=new Node(-1);
    Node*onetail=onehead;

    Node*twohead=new Node(-1);
    Node*twotail=twohead;

    Node*curr=head;
    //Create separate list
    while(curr!=NULL){
        int value =curr->data;

        if(value==0){
            insertattail(zerotail,curr);
        }
        else if(value==1){
            insertattail(onetail,curr);
            
        }
        else if(value==2){
            insertattail(twotail,curr);
            
        }
        curr=curr->next;
    }

    //Merge these three sublists
    if(onehead->next!=NULL){
        zerotail->next=onehead->next;
    }
    if(onehead->next==NULL){
        zerotail->next=twohead->next;
    }

    onetail->next=twohead->next;
    twotail->next=NULL;

    head=zerohead->next;
    //delete dummy node
    delete zerohead;
    delete onehead;
    delete twohead;
    return head;
}
int main(){

    return 0;
}