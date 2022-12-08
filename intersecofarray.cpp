#include<iostream>
using namespace std;

void intersectionofarr(int arr1[],int arr2[],int n1,int n2){
    // if(n1>n2){
    //     int s=n1;
    // }
    // else{
    //     int s=n2;
    // }
    int i=0,j=0;
    while(j<n2){
        if(arr1[i]>arr2[j]){
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{//still working
            cout<<arr1[j]<<" ";
            i++;
            j++;
        }

    }
}
int main(){
    int arr1[6]={1,3,3,6,7,9};
    int arr2[4]={3,3,9,10};

    intersectionofarr(arr1,arr2,6,4);
    return 0;
}