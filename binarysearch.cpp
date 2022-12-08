#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int low=0,hig=n-1;
    int mid= low + (hig-low)/2;
    while(low<=hig){
        //note in case of low+hig/2 e get error when low==2^31-1 and hig=2^31-1 to aoid this we use/*******mid=low+(hig-low)/2 
        if(key==arr[mid]){
            hig=mid;
            return mid;
        }
        else if(key>arr[mid]){
            low=mid+1;
            // mid=(low+hig)/2;
        }
        else if(key<arr[mid]){
            hig=mid-1;
        }
            mid= low + (hig-low)/2;
    }
    return -1;

}
int main(){
    int arr[9]={2,4,6,9,10,15,16,20,25};

    cout<<binarysearch(arr,9,19);
    return 0;
}