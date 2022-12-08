#include <bits/stdc++.h> 
// #include<iostream>
using namespace std;
bool ispossible(vector<int>arr,int mid,int m){
    int sum=0;
    int count=1;
    for(int i=0;i<arr.size();i++){
        if(sum+arr[i]<=mid ){
            sum+=arr[i];
        }
        else{
            count++;
            if(count>m ||arr[i]>mid){
                return false;
            }
            sum=arr[i];
        }
    }
    return true;
}
int an(vector<int>arr,int s,int e,int ans,int m){
    int mid=s+(e-s)/2;
    cout<<endl<<mid<<endl;
    
    if(s>e){
        return 0;
    }
    if(s==e){
        return ans;
    }
    
    if(ispossible(arr,mid,m)){
        cout<<endl<<"Ans is"<<ans<<endl;
        e=mid-1;
        ans=mid;
    }
    else{
        s=mid+1;
    }
    return an(arr,s,e,ans,m);
    // cout<<ans<<endl;
    
}
int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int k=0;
    for(int i=0;i<n;i++){
        k+=arr[i];
    }
    return an(arr,0,k-1,-1,m);
    
}
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout<<allocateBooks(v,4,2);

    return 0;
}