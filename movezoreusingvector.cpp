#include<iostream>
#include<vector>
using namespace std;

void movezero(vector<int> &nums){
    int i=0;

    //all non zeroes ko left karo zeroes to apne app hi right me a jayenge
    for(int j=0;j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;
        }
    }
}
int main(){
    
    return 0;
}