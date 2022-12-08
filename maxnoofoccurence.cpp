#include<iostream>
using namespace std;

char getmaxoccurennce(string s){
    int arr[26]={0};
    //Create array of count
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        // if(ch>='a'&& ch<='z'){
            int number= ch -'a';
        // }//asuming that inputed number is lower case 
        // else{
        //     number =ch-'A';
        // }
        arr[number]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if (maxi<arr[i]){
            ans = i;
            maxi =arr[i];
        }
        
    }
    char finalans='a'+ans;
}
int main(){
    
    return 0;
}