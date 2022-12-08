#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>st,int count,int size){
    if(count==size/2){
        st.pop();
        return ;
    }

    int num = st.top();
    st.pop();
    
    solve(st,count+1,size);
    st.push(num);

}
void deletemiddle(stack<int>&inputstack,int N){
    int count =0;
    solve(inputstack,count,N);
}
int main(){
    
    return 0;
}