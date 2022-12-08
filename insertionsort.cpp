#include<iostream>
#include<vector>
using namespace std;

// void insertionsort(vector<int>&arr , int n){
void insertionsort(int* arr , int n){
    for(int i=1;i<n;i++){
        int j;
        int temp=arr[i];
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{

                break;
            }
        }
        arr[j+1]=temp;
    }
}

//Do the samething whith while loop

int main(){
    int arr[5]={5,6,8,2,1};
    // arr[2]=arr[3];
    insertionsort(arr,5);
    for(int i=0;i<5;i++){
    cout<<arr[i];
    }
    return 0;
}