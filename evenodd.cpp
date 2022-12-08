#include<iostream>
using namespace std;

bool iseven(int a){
    if(a&1){
        return 0;
    }
        return 1;
}
int main(){
    
    int num;
    cin>>num;
    if(iseven(num)){
        cout<<"Number is even";
    }
    else{
    cout<<"Number is odd";
    }
    return 0;
}