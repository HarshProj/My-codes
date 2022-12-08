#include<iostream>
using namespace std;

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortone(int arr[],int n){
    int l=0;
    int h=n-1;
    while(l<h){
        while(arr[l]==0){
            l++;
        }
        while(arr[h]==1){
            h--;
        }
        if( l<h)
        swap(arr[l],arr[h]);
        l++;h--;
    }
    cout<<"Your sorted array is "<<endl;
}
int main(){
    int arr[8]={1,1,0,0,0,0,1,0};

    sortone(arr,8);
    printarr(arr,8);
    
    return 0;
}