#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
//     int index=0;
    vector<int> ans;
    for(int col=0;col<mCols;col++){
        if(col&1){
        for(int row=nRows-1;row>=0;row--){
//             cout<<arr[row][col]<<" ";
            ans.push_back(arr[row][col]);
        }
        }
        else{
            for(int row=0;row<nRows;row++){
//                 cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            } 
        }
    }
    return ans;
}
int main(){

    return 0;
}