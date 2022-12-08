#include<iostream>
using namespace std;

int getmin(int num[],int size){
    int mini=INT32_MAX;
    for(int i=0;i<size;i++){
        mini=min(mini,num[i]);
        // if(num[i]<min){
        //     min=num[i];
        // }
    }
    return mini;
}

int getmax(int num[],int size){
    int maxi=INT32_MIN;
    for(int i=0;i<size;i++){

        maxi=max(maxi,num[i]);
        // if(num[i]>max){
        //     max=num[i];
        // }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    cout<<"Maximum value is"<<getmax(arr,n)<<endl;
    cout<<"Minimum value is"<<getmin(arr,n)<<endl;
    return 0;
}