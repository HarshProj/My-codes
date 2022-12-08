#include<iostream>
using namespace std;

int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    return arr[0]+sum(arr+1,n-1);
    
    
}
bool issorted(int arr[],int size){
    //base case
    if(size == 0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingpart=issorted(arr+1,size-1);
        return remainingpart;
    }
}
int main(){
    int arr[5]={2,4,6,8,9};
    int size=5;
    // bool ans = issorted(arr , size); 
    cout<<sum(arr,5);  
    return 0;
}