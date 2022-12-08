#include<iostream>
using namespace std;

int selectionsort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex])
                minindex=j;
            
        }
        swap(arr[minindex],arr[i]);
    }
}  
int main(){

    return 0;
}