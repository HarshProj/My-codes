#include<iostream>
using namespace std;

void print(int *arr,int n){
    cout<<"Size of arr :"<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
bool linearser(int *arr,int n,int k){
    print(arr,n);cout<<endl;
    if( n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{

        return linearser(arr+1,n-1,k);
    }


}    
int main(){
    int arr[5]={3,5,1,2,6};
    if(linearser(arr,5,2)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}