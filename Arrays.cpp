#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printsum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=arr[i]+sum;
    }
    cout<<endl;
    cout<<"Sum of your elements is:"<<sum<<endl;
}
int main(){
     int number[15],n;
     cin>>n;
     for(int i=0;i<n;i++){
        cin>>number[i];
     }
     printsum(number,n);
    // printarray(number,15);
    // cout<<"Length of the array "<<(sizeof(number)/sizeof(int));

    return 0;
}