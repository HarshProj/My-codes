#include<iostream>
using namespace std;

int findunique(int *arr,int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
}
bool uniquecount(int*arr,int size){
    int ans=0;
    for(int i=0;i<size;i++){

    }
}

// int findduplicate(vector<int>&arr){
//There are 1 to n-1 numbers in the array where n-1 is its length one is duplicate we have to fingd it
int findduplicate(int*arr){
    int size=sizeof(arr)/sizeof(int);
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++)
    {
        ans=ans^i;
    }
}

// void intersectionofarr(int*arr1,int size1,int*arr2,int size2){
//     int sum;
//     for(int i=0;i<size1;i++){

//         for(int j=0;j<size2;j++){
//             if(arr1[i]>=arr2[j]){
//                 if(arr1[i]==arr2[j]){
//                     arr2[j]=-1;
//                     cout<<arr1[i]<<" ";
//                     break;
//                 }
//             }
//             else{
//                 break;
//             }
//         }
//     }
// }

//same thing with different time complexity
void intersectionofarr(int*arr1,int n,int*arr2){
    int i=0,j=0;
    int ans=0;
    while(i<n && j<=n){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i];
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int arr1[5]={2,2,3,3,4};
    int arr2[6]={2,3,3,3,4,4};
    // intersectionofarr(arr1,5,arr2,6);
    intersectionofarr(arr1,6,arr2);

    return 0;
}