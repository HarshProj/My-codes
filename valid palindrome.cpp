#include<iostream>
using namespace std;

class Solution {
    private:
    bool valid(char ch){
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
            return 1;
        }
        return 0;
    }
    char tolowercase(char ch){
    if((ch>='a'&& ch<='z')||(ch>='0'&& ch<='9')){
        return ch;
    }
    else{
        char temp= ch-'A'+'a';//Concept 'A'-'B'=1 a+1=b
        return temp;
    }
}
       bool checkPalindrome(string s)
{   
    // Write your code here.
    int st=0;
    int e=s.length()-1;
    while(st<=e){
        if(s[st]!=s[e]){
            return 0;
        }
        else{
            st++;
            e--;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        
        int i=0;
        string temp="";
        
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        //lowercase
        for(int j=0;j<temp.length();j++){
            temp[j]=tolowercase(temp[j]);
        }
        return checkPalindrome(temp);
    }
};
int main(){

    return 0;
}