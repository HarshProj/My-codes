#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){

    for(int i=0;i<n;i++){
        if(arr[i]=-key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    //Whether 1 is present in the array or not

    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;
    int found=search(arr,10,key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }
    return 0;
}