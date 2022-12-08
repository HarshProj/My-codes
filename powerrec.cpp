#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int res= power(a,b/2);
    if(b&1){
        return a*res;
    }
    else{
        return a*res*res;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=power(a,b);
    cout<<ans;
    return 0;
}