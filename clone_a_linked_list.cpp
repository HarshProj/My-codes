#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node*arb;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertattail(Node* &head,Node* &tail,int d){
    Node*newnode=new Node(d);
    if(head==NULL){
    head=newnode;
    tail=newnode;
    return ;

    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
Node*copylist(Node*head){
    //step1 create a clone list
    Node*clonehead=NULL;
    Node*clonetail=NULL;

    Node*temp=head;
    while(temp!=NULL){
        insertattail(clonehead,clonetail,temp->data);
        temp=temp->next;
    }
    //step 2 create a map
    unordered_map<Node* , Node*>oldtonewnode;
    Node*originalnode=head;
    Node*clonenode=clonehead;
    while(originalnode!=NULL   ){
        oldtonewnode[originalnode]=clonenode;
        originalnode=originalnode->next;
        clonenode=clonenode->next;
    }
    originalnode=head;
    clonenode=clonehead;

    while(originalnode!=NULL){
        clonenode->arb=oldtonewnode[originalnode->arb];
        originalnode=originalnode->next;
        clonenode=clonenode->next;
    }
    return clonehead;


}

Node*approach2(Node*head){
    // step 1 create a clone list 

    Node*clonehead=NULL;
    Node*clonetail=NULL;

    Node*temp=head;
    while(temp!=NULL){
        insertattail(clonehead,clonetail,temp->data);
        temp=temp->next;
    }

    //step 2 clonenode add in between original list 

    Node*originnalnode=head;
    Node*clonenode=clonehead;

    while(originnalnode!=NULL && clonenode!=NULL){
        Node*next=originnalnode->next;
        originnalnode->next=clonenode;
        originnalnode=next;

        next=clonenode->next;
        clonenode->next=originnalnode;
        clonenode=next;
    }
    
    //step 3 random pointr copy

    temp=head;
    while(temp!=NULL){
        if(temp->next!=NULL){
            temp->next->arb=temp->arb 
            ?temp->arb->next:temp->next=temp->arb;
            //   or if(temp->arb!=NULL){
            //     temp->next->arb=temp->arb->next;
            // }
            // else{
            //     temp->next=temp->arb;
            // }
        }
        temp=temp->next->next;
    }
    //step 4 revert changes in step2
    originnalnode=head;
    clonenode=clonehead;
    while(originnalnode!=NULL && clonenode!=NULL){
        originnalnode->next=clonenode->next;
        originnalnode=originnalnode->next;
        
        if(originnalnode!=NULL){
        clonenode->next=originnalnode->next;
        }
        clonenode=clonenode->next;
    }

    // step 5 return ans
    return clonehead;
}
int main(){

    return 0;
}