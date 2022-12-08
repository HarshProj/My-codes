#include<iostream>
#include<vector>
using namespace std;
//interviews me as e tise a jata hai
int compress(vector<char>& chars){
    int i=0;
    int ansindex =0;
    int n=chars.size();
    while(i<n){
        int j=i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }
        //yaha kab aoge
        //ya to vector poora   travers kardiya
        //ya fer new/different character encounter kia hai

        //oldchar store karlo
        chars[ansindex++]=chars[i];
        int count=j-i;
        if(count>1){
            //converting counting into  single digit and saving in answer
            string cnt = to_string(count);
            for(char ch:cnt){
                chars[ansindex++]=ch;
            }
        }
        i=j;
    }
    return ans;
}
int main(){
    
    return 0;
}