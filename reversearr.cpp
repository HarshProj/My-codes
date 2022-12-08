#include<iostream>
using namespace std;
void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }cout<<endl;
}
// void reverse(int arr[],int size){
//     for(int i=0;i <=size/2 ; i++ ){
//         int hig=size-i-1;
//         if(hig>=i){
//             swap(arr[i],arr[hig]);
//         }
//     }
// }
void reverse(int arr[],int size){

    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
       
    }
}
int main(){
    int arr[15];
    int n;
    cin>>n;

    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;

    cout<<"Reverse of this array is"<<endl;
    reverse(arr,n);
    printarray(arr,n);

    return 0;
}