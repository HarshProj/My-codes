#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    int num = s.top();
    s.pop();

    insertatbottom(s,x);

    s.push(num);
}
void reverstack(stack<int>s){
if(s.empty()){
    return ;
}
    int num=s.top();
    s.pop();
    reverstack(s);
    insertatbottom(s,num);

}
int main(){
 
    return 0;
}