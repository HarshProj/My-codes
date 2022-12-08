#include<iostream>
using namespace std;

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortarr(int arr[],int n){
    int l=0,h=n-1,midl=n/2-1,midr=n/2;
    // int arr[9]={0,2,2,1,0,1,1,0,2};
    while(l<h){
        // cout<<"Step"<<l<<endl;
        // printarr(arr,9);
        while(arr[l]==0){
            l++;
        }
        // while(arr[mid]==1){
        //     l++;
        // }
        while(arr[h]==2){
            h--;
        }
        if(arr[l]==2 && arr[h]!=2){
            swap(arr[l],arr[h]);
        }

        else if(arr[l]==1 && arr[midl]==0){
            swap(arr[l],arr[midl]);
            midl--;
        }
        else if(arr[h]==1 && arr[midr]==2){
            swap(arr[h],arr[midr]);
            midr++;
        }
        else{
            l++;
            // h--;
        }
        // else if(arr[h]==1 && arr[mid]==2){
        //     swap(arr[h],arr[mid]);
        //     mid++;
        // }

       
        // l++;
        // h--;
    }

}
int main(){
    // int arr[9]={0,2,2,1,0,1,1,0,2};
    int arr[16]={0,2,2,1,0,1,1,0,1,2,0,1,2,0,1,1};

    // sortarr(arr,9);
    sortarr(arr,16);


    // printarr(arr,9);
    printarr(arr,16);
    return 0;
}