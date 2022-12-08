#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(vector<int>&nums,vector<int>output,int index,vector<vector<int>>&ans){
        //Base case
        if(index >= nums.size()){
            ans.push_back(output); 
            return ;
        }
        //exclude
        solve(nums,output,index+1,ans);
        //include
        int ele = nums[index];
        output.push_back(ele);
        solve(nums,output,index+1,ans);
    }  
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>output;
        int index=0;
        solve(nums,output,index,ans);
        return ans;
    }
}; 
int main(){

    return 0;
}