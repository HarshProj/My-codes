#include<iostream>
using namespace std;

int peakele(int arr[],int n){
    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
        // cout<<1;
    }
    return s;
}
int main(){
    int arr[5]={1,2,3,15,10};
    cout<<peakele(arr,5);

    return 0;
}