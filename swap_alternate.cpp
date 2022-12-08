#include<iostream>
using namespace std;

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }cout<<endl;
}
void swapalternate(int arr[],int n){

    for(int i=0;i<n;i+=2){
        if((i+1) < n){
        swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[6]={1,2,7,8,5,6};
    swapalternate(arr,6);
    printarr(arr,6);
    return 0;
}