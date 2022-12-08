#include<iostream>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        
        // int rowcount=0;
        int colcount=col-1;
        
        for(int i=0;i<row;i++){
            for(int j=i+1;j<col;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col/2;j++){
                swap(matrix[i][j],matrix[i][colcount--]);
                
            }
        }
        //OR
        for(int i=0;i<row;i++){
        reverse(matrix[i].begin(),matrix[i].end());
       }
    }
       
};
int main(){
 
    return 0;
}