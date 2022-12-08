#include<iostream>
using namespace std;

void pairsum(int arr[],int n,int key){
    
    for (int i = 0; i < n; i++)
    {
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key){
                cout<<arr[i]<<" , "<<arr[j]<<endl;
            }
            else if(arr[i]==key){
                cout<<arr[i];
                break;
            }
        }
    }
    
}
// void tripletsum(int arr[],int n,int key){
    
//     for (int i = 0; i < n; i++)
//     {
//         for(int j=i+1;j<n;j++){
            // for(int k=j+1;j<n;j++){}
//             if(arr[i]+arr[j]+arr[k]==key){
//                 cout<<arr[i]<<" , "<<arr[j]<<" , " <<<<arr[k]endl;
//             }
//             else if(arr[i]==key){
//                 cout<<arr[i];
//                 break;
//             }
        // }
//         }
//     }
    
// }
int main(){
    int arr[5]={2,3,5,6,9};
    int key;
    cin>>key;
    pairsum(arr,5,key);
    return 0;
}