#include<iostream>
#include<queue>
using namespace std;

int main(){
    //Max heap
    priority_queue<int> maxi;

    //Min heap
    priority_queue<int,vector<int>,greater<int> >mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"Size"<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        maxi.pop();
    }cout<<endl;

    cout<<"Is empty"<<mini.empty()<<endl;
    return 0;
}