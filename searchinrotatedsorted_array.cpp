#include<iostream>
using namespace std;

int  pivotele(int arr[],int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[0]<=arr[mid]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}


int binarysearch(int arr[],int s,int e,int key){
    int low=s,hig=e-1;
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

int searchrotarr(int arr[],int n,int key,int pivot){
    if(key>arr[pivot]&& key<=arr[n-1]){

        return binarysearch(arr,pivot,n-1,key);
    }
    else{
        return binarysearch(arr,0,pivot,key);
    }


}

int main(){
    int arr[5]={7,9,1,2,3};

    int key;
    cin>>key;
    int pivot=pivotele(arr,5);
    cout<<searchrotarr(arr,5,key,pivot);

    return 0;
}