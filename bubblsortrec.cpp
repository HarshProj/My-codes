#include <bits/stdc++.h> 
// #include<iostream>
using namespace std;
void sortarray(int*arr,int n){
    //base case
    if(n==0||n==1){
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortarray(arr,n-1);
}

void ans(int*arr,int i){
    if(i==1){
        return ;
    }
    int temp=arr[i];
        int j;
        for( j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
               break;
           }
        }
        arr[j+1]=temp;
    ans(arr,i-1);
}
void insertionSort(int n, int*arr){
    // Write your code here.
    ans(arr,n-1);
        
}
int main(){
    int arr[5]={4,11,12,20,7};
    sortarray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";  
    }
    return 0;
}