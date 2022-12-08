#include<iostream>
using namespace std;

bool ispossible(int arr,int k,int mid){
    int cowcount=1;
    int lastpos=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-lastpos >= mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
        }
        lastpos=arr[i];
    }
    return false;
}
int agressivecows(int arr[],int n,int k){
    arr=sort(arr,arr+n);
    int s=0;
    int maxi =-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int mid =s+(e-s)/2;

    while(s<=e){
        if(ispossible(arr,k,mid)){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}
int main(){
    
    return 0;
}