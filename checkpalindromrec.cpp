#include<iostream>
using namespace std;
bool palindrome(string s,int l,int r){
    if(l>r){
        return true;
    }
    if(s[l]!=r){
        return false;
    }
    else{
        return palindrome(s,l++,r--);
    }

    
}
int main(){
    
    return 0;
}