#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>nums,vector<vector<int>>& ans,int index){
    if(index>=nums.size()){
        ans.push_back(nums);
        return ;
    }
    for(int j=index;j<nums.size();j++){
        swap(nums[index],nums[j]);
        solve(nums,ans,index+1);
        swap(nums[index],nums[j]);//we use this to backtrack the string  
    }
}
vector<vector<int>> permutation(vector<int>&nums)
{
    vector<vector<int>> ans;
    int index=0;
    solve(nums,ans,index);
    return ans;
}
int main(){
    vector <int>ans={1,2,3};
    vector<vector<int>>a=permutation(ans);
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}