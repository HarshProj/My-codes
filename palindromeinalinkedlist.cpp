#include<iostream>
#include<vector>
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

//copy paste on array then solve it
bool checkpalindrome(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
Node*getmid(Node*head){
    Node*slow=head;
    Node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node*reverse(Node*head){
    Node*curr=head;
    Node*prev=NULL;
    Node*next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool ispalindrome(Node*head){
    if(head == NULL || head->next ==NULL){
        return true;
    }
    //step 1
    Node*middle=getmid(head);
    //Step 2 reversr list after
    Node*temp=middle->next;
    middle->next=reverse(temp);

    //step 3 compare both halfs
    Node*head1=head;
    Node*head2=middle->next;
    while(head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }

    // step4 repeate step 2(optional)
    temp=middle->next;
    middle->next=reverse(temp);
    return true;
}
bool arrcheck(Node*head){
    vector<int>arr;

    Node*temp=head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    return checkpalindrome(arr);
}
int main(){

    return 0;
}