#include<iostream>
#include<vector>
using namespace std;

int ispossible(vector<int> &vec,int k,int mid){
    int sum=0;
    int count=1;
    for(int i=0;i<vec.size();i++){
        if(sum+vec[i]<=mid){
            sum=sum+vec[i];
        }
        else{
            count++;
            if(count>k||vec[i]>mid){
                return false;
            }
            
            sum=vec[i];
            
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int sum=0;
    for(int i=0;i<boards.size();i++){
        sum=sum+boards[i];
    }
    int s=0,e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispossible(boards,k,mid)==1){
            ans=mid;
//             cout<<ans<<endl;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    
    return 0;
}