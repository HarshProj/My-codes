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
Node*reverse(Node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node*prev=NULL;
    Node*curr=head;
    Node*forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}
void insertattail(Node* &head,Node* &tail,int val){
    Node*temp=new Node(val);
    if(head==NULL){
        head=temp;
        tail=temp;
        return ;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}
Node*add(Node*first,Node*second){
    int carry=0;
    Node*anshead=NULL;
    Node*anstail=NULL;
    while(first!=NULL || second!=NULL ||carry!=0){
        int val1=0;
        int val2=0;
        if(first!=NULL)
            val1=first->data;
        
        // int val2=0;
        if(second!=NULL)
            val2=second->data;


        int sum=carry+val1+val2;
        int digit=sum%10;
        // Node*temp=new Node(digit);
        // creat4 node ans add in ans linked list
        insertattail(anshead,anstail,digit);
        carry=sum/10;
        if(first!=NULL)
        first=first->next;
        if(second!=NULL)
        second=second->next;
    }
    // while(first!=NULL){
    //     int sum=carry+first->data;
    //       int digit=sum%10;
    //     // Node*temp=new Node(digit); 
    //     // creat4 node ans add in ans linked list
    //     insertattail(anshead,anstail,digit);
    //     carry=sum/10;
    //     first=first->next;

    // }
    // while(second!=NULL){
    //     int sum=carry+second->data;
    //       int digit=sum%10;
    //     // Node*temp=new Node(digit);
    //     // creat4 node ans add in ans linked list
    //     insertattail(anshead,anstail,digit);
    //     carry=sum/10;
    //     second=second->next;
    // }
    // while(carry!=0){
    //     int sum=carry;
    //     int digit=sum%10;
    //     // Node*temp=new Node(digit);
    //     // creat4 node ans add in ans linked list
    //     insertattail(anshead,anstail,digit);
    //     carry=sum/10;
    // }
    return anshead;
}
Node*addtwolinkedlist(Node*first,Node*second){
    first=reverse(first);
    second=reverse(second);


    //Add two linked list
    Node*ans=add(first,second);

    // step3 
    ans=reverse(ans);

    return ans;
}
int main(){
    
    return 0;
}