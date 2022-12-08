#include<iostream>
#include<stack>
using namespace std;

void sortedinsertnum(stack<int>s,int num){
    //base case
    if(s.empty() || (!s.empty() && s.top() < num)){
        s.push(num);
        return ;

    }
    int n=s .top();
    s.pop();

    sortedinsertnum(s,num);
    s.push(n);
}
void sortstack(stack<int>s){
    if(s.empty()){
        return ;
    }
    int num=s.top();
    s.pop();

    sortstack(s);
    sortedinsertnum(s,num);
}
int main(){

    return 0;
}