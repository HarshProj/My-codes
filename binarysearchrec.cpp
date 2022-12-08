#include<iostream>
using namespace std;

void print(int*arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
}
bool binarysearch(int*arr,int s,int e,int k){
    //Base case
    //element not found
    print(arr,s,e);
    int mid=s+(e-s)/2;
    cout<<endl<<"Mid is"<<arr[mid]<<endl;
    if(s>e){
        return false;
    }
    //element found
    if(arr[mid]==k){
        return true;
    }

    if(arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    }

    else{
        return binarysearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[6]={2,4,6,10,14,18};
    int size = 6;
    int key = 222;

    cout<<"Present or not "<<binarysearch(arr,0,5,key);
    return 0;
}