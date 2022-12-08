#include<bits/stdc++.h>
using namespace std;

void printarr(int*arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool uniqueocc(int arr[],int n){
    int ar2[n];
    sort(arr, arr + n);
    int i=0;
    while(i<n){
        int count=1;
        for(int j=i+1 ; j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            else{
                break;
            }
        }
        ar2[i]=count;
        i=i+count;
    }
    sort(ar2,ar2+n);
    i=0;
    while(i<n){
        if(ar2[i]==ar2[i+1]){
            return false;
        }
        i++;

    }
    return true;
}
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>v;
        sort(arr.begin(),arr.end());
        arr.push_back(arr.back());
        int count=1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                count++;
                continue;
            }
            v.push_back(count);
            count=1;
        }count--;
        v.push_back(count);
        sort(v.begin(),v.end());
         for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                return false;
            }
            
        }
        return true;
        
        
    }
};
int main(){
    int arr[7]={1,1,3,3,2,2,2};

    printarr(arr,7);
    cout<<uniqueocc(arr,7)<<endl;
    return 0;
}