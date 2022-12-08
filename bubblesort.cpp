#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }

        }
        if(swapped==false){
            //already sorted;
            break;
        }
    }
}

int main(){

    return 0;
}