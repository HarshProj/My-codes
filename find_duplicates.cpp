#include<iostream>
using namespace std;

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
//given that the array is from 1 to n where 1<arr[i]<n
void dup(int arr[],int n){

    for(int i=0;i<n;i++){
        arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        if(arr[abs(arr[i])-1]>0){
            cout<<abs(arr[i])<<" ";
        }
    }
}
int main(){
    int arr[5]={5,2,2,4,4};
    dup(arr,5);
    printarr(arr,5);
    return 0;
}