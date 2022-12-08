#include<iostream>
using namespace std;

// void occurence(int arr[],int n,int num){

//     for(int i=0;i<n;i++){
//         if(arr[i]==num && arr[i-1]!=num){
//             cout<<i;
//         }
//         else if(arr[i]==num && arr[i+1]!=num){
//             cout<<i;
//         }
//     }
    
// }

int firstocc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;

        }
        else if(arr[mid]<key){
            s=mid+1;

        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastocc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;

        }
        else if(arr[mid]<key){
            s=mid+1;

        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[5]={1,2,3,3,5};
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // occurence(arr,n,2);
    cout<<"First occurence of 3 is at index "<<firstocc(arr,5,3)<<endl;;
    cout<<"last occurence of 3 is at index "<<lastocc(arr,5,3)<<endl;;
    return 0;
}