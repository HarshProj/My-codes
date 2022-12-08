#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>s,int ele){
    if(s.empty()){
        s.push(ele);
        return ;
    }
    int e=s.top();
    s.pop();

    //recursive call
    
    solve(s,ele);
    s.push(e);

}
stack <int> addatbottom(stack<int>s,int ele){
    solve(s,ele);
    return s;
}
int main(){

    return 0;
}